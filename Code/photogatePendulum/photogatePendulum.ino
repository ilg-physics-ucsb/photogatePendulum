#include <Keyboard.h>
#include <Adafruit_DotStar.h>

#define PIN_BUTTON 7
#define PIN_PHOTOGATE 10
#define PIN_SWITCH A5

Adafruit_DotStar onBoardLED(DOTSTAR_NUM, PIN_DOTSTAR_DATA, PIN_DOTSTAR_CLK, DOTSTAR_BRG);

uint32_t debounceTimer = 50 ;
char timeBuff[7] ;
float time = 0 ;
float timeDel = 0 ;

bool buttonState = 0 ;
bool buttonStateLast = 0 ;
uint32_t buttonTimer = 0 ;

bool switchState = 0 ;
bool switchStateLast = 0 ;
uint32_t switchTimer = 0 ;

uint64_t photogateTimeLeading = 0 ;
uint64_t photogateTimeFollow = 0 ;
bool photogateFlag = 0 ;

void interruptPhotogate(){
  if (!digitalRead(PIN_PHOTOGATE)){
    photogateTimeLeading = micros() ;
  } else {
    photogateTimeFollow = micros() ;
    photogateFlag = 1 ;
  }
}

void setup() {
  // Init on Board LED
  onBoardLED.begin(); // Initialize pins for output
  onBoardLED.setBrightness(80);
  onBoardLED.show();  // Turn all LEDs off ASAP

  pinMode(PIN_BUTTON, INPUT_PULLUP) ;
  pinMode(PIN_SWITCH, INPUT_PULLUP) ;
  pinMode(PIN_PHOTOGATE, INPUT) ;
  attachInterrupt(PIN_PHOTOGATE, interruptPhotogate, CHANGE) ;

  // Init communication methods
  Serial.begin(115200) ;
  delay(500) ;
  Serial.println("Started software") ;
  Keyboard.begin() ;

  // Init Switch
  switchStateLast = switchState ;
  if (switchState){
    // What to do when switch turned on
    onBoardLED.setPixelColor(0, 255, 0, 0) ; // Show the program through the LEDs
    onBoardLED.show();
  } else {
    // What to do when switch turned off
    onBoardLED.setPixelColor(0, 0, 255, 0) ; // Show the program through the LEDs
    onBoardLED.show();
  }
}

void loop() {  

  // Run on state change of switch
  switchState = digitalRead(PIN_SWITCH) ;
  if ( (switchState != switchStateLast) && (millis() - switchTimer >= debounceTimer) ){
    switchTimer = millis() ;
    switchStateLast = switchState ;

    Serial.println(switchState) ;

    if (switchState){
      // What to do when switch turned on
      onBoardLED.setPixelColor(0, 255, 0, 0) ; // Show the program through the LEDs
      onBoardLED.show();
    } else {
      // What to do when switch turned off
      onBoardLED.setPixelColor(0, 0, 255, 0) ; // Show the program through the LEDs
      onBoardLED.show();
    }
  }

  // Run on photogate trigger
  if (photogateFlag){
    photogateFlag = 0 ;
    time = (float) photogateTimeLeading/1000000 ;
    timeDel = (float) (photogateTimeFollow - photogateTimeLeading)/1000000 ;
    if (switchState){
      Keyboard.print(time, 4) ;
      delay(10) ;
      Keyboard.print("\t") ;
      delay(10) ;
      Keyboard.println(timeDel, 6) ;
    }
  }

}



