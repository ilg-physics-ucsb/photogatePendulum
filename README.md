# Photogate Pendulum

This repository should hold everything related to the photgates made by the ILG for recording more precise data on a pendulum setup. These photogates were made using off the shelf components from adafruit and amazon and mcmaster using a 3D printed case and a CNC milled PCB. For information on components visit the documentation folder, for information on the case or the ciruit visit the hardware folder and for information on the code visit the code folder. 

## Assembly Instructions

**Materials required** 

* **Integrated Circuits**
* 1x [Adafruit ItsyBitsy M0](https://www.digikey.com/en/products/detail/adafruit-industries-llc/3727/8346575?s=N4IgTCBcDaIIYBM4DMBOBXAlgFwAQ4GcBPXAI0JIFkAGEAXQF8g)
* 1x [LM358 Op Amp DIP-8](https://www.digikey.com/en/products/detail/texas-instruments/LM358P/277042)
* **Transistors**
* 6x [2N3904 NPN BJT](https://www.digikey.com/en/products/detail/diotec-semiconductor/2N3904/13164701)
* 1x [2N3906 PNP BJT](https://www.digikey.com/en/products/detail/diotec-semiconductor/2N3906/22191309)
* 1x [Phototransistor 3mm](https://www.digikey.com/en/products/detail/vishay-semiconductor-opto-division/BPW85A/4071264?s=N4IgTCBcDaIEIAUDqAOArAQRAXQL5A)
* **Diodes**
* 1x [IR LED 5mm](https://www.digikey.com/en/products/detail/vishay-semiconductor-opto-division/TSHF6210/4073549)
* 1x [Blue LED 5mm](https://www.digikey.com/en/products/detail/w%C3%BCrth-elektronik/151051BS04000/4490009)
* 1x [1N4148 Diode](https://www.digikey.com/en/products/detail/onsemi/1N4148/458603)
* **Capacitors**
* 5x [1nF](https://www.digikey.com/en/products/detail/kemet/R82EC1100SH50J/5141859)
* 1x [4.7nF](https://www.digikey.com/en/products/detail/kemet/R82EC1470AA50J/2571340)
* 1x [10nF](https://www.digikey.com/en/products/detail/kemet/R82EC2100AA50J/2571307)
* **Resistors**
* 3x [220Ω](https://www.digikey.com/en/products/detail/stackpole-electronics-inc/CF14JT220R/1741346) 
* 1x [360Ω](https://www.digikey.com/en/products/detail/stackpole-electronics-inc/CF14JT360R/1741406) 
* 1x [1kΩ](https://www.digikey.com/en/products/detail/stackpole-electronics-inc/CF14JT1K00/1741314) 
* 1x [1.2kΩ](https://www.digikey.com/en/products/detail/stackpole-electronics-inc/CF14JT1K20/1741238) 
* 2x [2.2kΩ](https://www.digikey.com/en/products/detail/stackpole-electronics-inc/CF14JT2K20/1741321)
* 9x [10kΩ](https://www.digikey.com/en/products/detail/stackpole-electronics-inc/CF14JT10K0/1741265)
* 2x [22kΩ](https://www.digikey.com/en/products/detail/stackpole-electronics-inc/CF14JT22K0/1741350)
* 1x [33kΩ](https://www.digikey.com/en/products/detail/stackpole-electronics-inc/CF14JT33K0/1741403)
* 2x [47kΩ](https://www.digikey.com/en/products/detail/stackpole-electronics-inc/CF14JT47K0/1741444)
* 3x [100kΩ](https://www.digikey.com/en/products/detail/stackpole-electronics-inc/CF14JT100K/1741263)
* 1x [220kΩ](https://www.digikey.com/en/products/detail/stackpole-electronics-inc/CF14JT220K/1741348)
* 1x [1MΩ](https://www.digikey.com/en/products/detail/stackpole-electronics-inc/CF14JT1M00/1741316) 
* **Tactile**
* 1x [Slide Switch SPDT H6mm](https://www.digikey.com/en/products/detail/same-sky-formerly-cui-devices/SLW-1298856-5A-RA-N-D/24399327)
* **Hardware**
* 1x [FR-1 single sided PCB blank](https://bantamtools.com/products/pcb?variant=32765656432719)
* 1x [1/32th in flat end mill](https://www.mcmaster.com/3066A49)
* 1x [USB-micro to USB-C cable](https://www.amazon.com/Type-C-Fasgear-Braided-Transfer-Compatible/dp/B07CHBR14C/ref=sr_1_3?crid=1D21SSNDEUH8P&dib=eyJ2IjoiMSJ9.PivcPrZAZSg21jQOPEd6xAvt9kDpQqMLWFVfht9Tn8mLNAZzDId2p5OxZ8LkejXtDpPKmn59rHOGYos2S7EBA3ajZcxPJMOG67W7Wv4sRvbQBcF_X5TXTdpQVGO5XpFmnKDs2Iv7MCWgjqrwcuj7gqHg7mUmrMKmFe2VphnZKjZm8xPE3bq8Ao8euvjV_39qhe8JMYmQLRm3Y08NwUTHYXBqhev11vDWwkCIPJ3RTQo.36eqddbM27o5PswbGuCB13i89pmYUmYZE5EW3kyz0KY&dib_tag=se&keywords=usb%2Bc%2Bto%2Busb%2Bmicro%2Bfasgear&qid=1762294692&sprefix=usb%2Bc%2Bto%2Busb%2Bmicro%2Bfasgear%2Caps%2C154&sr=8-3&th=1)
* 5x [M3x10mm screws](https://www.mcmaster.com/91290A115/)
* 5x [M3x6mm threaded inserts](https://www.mcmaster.com/94459A140/)
* 1x [1/4-20x0.226in threaded inserts](https://www.mcmaster.com/94459A736/)
* 1x [6in 1/4-20 mounting rod](https://www.mcmaster.com/97042A268/)


**Creating the PCB**

The heart of the photogate is its PCB housing all of the internal circuitry, all of which is housed on a PCB made to fit the case. All of the schematic and PCB design files can be found in a KiCAD oproject found [here](/Hardware/Circuit/photogatePendulumKiCAD/20AL_Pendulum_Photogate.kicad_pro). You can export the PCB design to a gerber file from here and send to a PCB manufacturer, or the baord has been designed to be able to be milled on a single sided PCB blank. To mill out the PCB you will need to export the edge cuts and bottom layer gerber files and the drill excellon file and then convert these to g-code. There is already a compiled g-code version of the scematic found [here](). This gcode was designed for use on our Bantam desktop milling machine, with a 1/32th in. flat end mill as the cutting tool. In formation on how to use this machine can be found [here](https://gaugeboson.physics.ucsb.edu/wiki/equipment/makerspace/cnc-machine/). Using this machine you can then cut out the PCB from the single sided PCB blank. The following is an image of the final PCB. The PCB May have some rough edges, leftover dust, or the copper may not have come off cleanly so there could be some post processing needed before soldering. You should use scotch brite to rub the surface and sides to get any excess dust and copper bits off. If the edges look rough you may also want to use a de-burring tool on them. 

![Result of milling PCB](/Documentation//Instructions/PCBTraces.jpg)

**Soldering the Circuit**

The components are laid very densly in the PCB and in non standard orientations so here are some directions for how to best get this board together. Before you start soldering also make sure the surface has not tarnished from sitting for too long. If it is tarnished the solder wont stick well, so you will need to buff out the tarnish with some scotch brite before you begin. 

* You should first start [soldering all the components that lay flat](/Documentation/Instructions/SolderFlatComponents.jpg) on the board. These include the 0 ohm resistors (wires) and the horizontally laid resistors. Also make sure to clip the excess leads off of all the components between each step as these will not fit in the case. 

* Next you should put on the [IR LED](/Documentation/Instructions/SolderIRLED.jpg) and [phototransistor](/Documentation/Instructions/SolderPhototransistor.jpg). These sit at a right angle anf flush with the board so you will have to bend them into shape first before soldering. It is very important to get the wires off the back as [flush with the PCB](/Documentation/Instructions/SolderRightAngleParts.jpg) as possible.

* Next the [capacitors should be soldered](/Documentation//Instructions/SolderCapacitors.jpg) in. 

* The switch and the diode should be soldering in next. 

* The [transistors should be soldered in next](/Documentation//Instructions/SolderTransistors.jpg), being careful of which ones are NPN vs PNP as well as which direction they face. 

* Next you should [solder in the last of the reistors](/Documentation//Instructions/SolderUprightResistor.jpg). The transistors already in should make it easier to do this. Parts of the PCB are very desne though so you may still have to clip the leads partway through just to access the rest of the leads you need to solder in. 

* The [8 pin DIP socket comes next](/Documentation//Instructions/SolderIC.jpg), you may need tape to hold it in place though. Make sure that pin 1 is facing the correct direct when installing the socket. 

* Next up is [the Itsy Bitsy](/Documentation//Instructions/SolderItsyBitsy.jpg). The holes for the headers are a bit tight so you should solder the headers onto the itsy bitsy while they are already in the holes on the PCB. 

* Lastly is [the Blue LED](/Documentation//Instructions/SolderBlueLED.jpg). This must be set up above the PCB slightly so that it is flush with the top of the case. 

After you are finished soldering you should plug it in to make sure the photogate works correctly before flashing the code. The Blue LED should light up when the path between the IR LED and phototransistor is obstructed even when there is no code on the teensy. I often forget to install the LM358 into the IC socket so if it is not working first check that. If it is not working and that is not the problem then you should check your solder joints to make sure there isnt any bridging, or for any stray strands of copper leftover from milling. 

**Assembling the Case**

You will also need to 3D print the files for the case, the lid can be found [here](/Hardware//CAD/photogatePendulumLid.stl) and the base [here](/Hardware/CAD/photogatePendulumBase.stl). If you need to edit the case for any reason the raw fusion 360 file can be found [here](/Hardware/CAD/photogatePendulumFusion360.f3z). The file will need supports to print, and we used a 0.1mm layer height and 15% infill with black PLA on a powder coated bed for best results. After the print finishes you will need to remove the supports using pliers from both the bottom and side of the base, and depending on the print quality you may need to clean the print of ant [stringing or stray filament threads](/Documentation/Instructions/FinishedPrint.jpg). 

Now that the print is clean you need to insert all of the interior threaded inserts, these are the M3x6mm inerts. Place them as [shown](/Documentation/Instructions/ThreadedInserts.jpg), and then use a soldering iron to[ heat and push them into place](/Documentation/Instructions/SoldeingThreadedInserts.jpg). As you insert them be careful that they are placed centered on their holes, that they are inserted straight, and that you dont leave any plastic up above the plane they should be flush with. When finished it should look like [this](/Documentation/Instructions/FinalThreadedInserts.jpg). Once the interior threadedinserts are finished you can attached the USB-C to micro-USB cable to the finsished PCB and [place it inside the case](/Documentation/Instructions/ClosingCase.jpg) and screw it together with the M3x10mm screws. 

The last step in assembly is to insert the [1/4-20 threaded insert](/Documentation/Instructions/Quarter20Insert.jpg) for the mounting rod. Since this insert is so large and shallow it is slightly precarious to heat it up with the soldering iron since you cant stick it down the center as you usually would, instaed you need to lay it across the insert and push it down sideways as seen [here](/Documentation/Instructions/SolderingQuarter20.jpg). This process can take some time as the heat transfer is not great, you just should be careful to melt the exterior of the box as little as possible outside the are needed. Once the inser is in s far as it can reasonably go you should [thread in the mounting rod while it is still warm](/Documentation/Instructions/ThreadingMountingRod.jpg) and the plastic is malleable so that the interior plastic forms around the tip giving it a snug fit. 

**Flashing the Code**

The code for this system was made in Arduino IDE and requires the built in libraries to fuction properly, so to flash the code you must use this IDE. The raw .ino file can be found [here](/Code/photogatePendulum/photogatePendulum.ino). To properly compile the code you will also need to install the core for the ItsyBitsy through Arduino IDE, to do this you will need to follow the steps in the ItsyBitsy datasheet. The code also requires a few libraries to work, you can find all of these [here](/Code/Libraries). You will need copy these over into the libraries sub-folder of wherever the Aduino IDE stores its files, often in "~/documents/Arduino/". From here you should be able to compile and upload the code to the ItsyBitsy when it is plugged into your computer.