
<p align="center">
  <img align="center" width="500" src="https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/logo3.png" />
</p>

# QMK Firmware for Bittens Inc. M0116 PCB
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/m0116-built.jpg ' width='1000'>

This repository contains the QMK firmware for my custom PCB designed for the Apple M0116 keyboard. These are some of the best vintage keyboards ever made... _if it wasn't for their horrendous matrix._ By implementing NKRO, the keyboard becomes an absolute joy to use for a daily driver! Moreover, the M0116 has a very practical layout that really shines when combined with QMK/Vial. 
<br>
<br>
The PCB is a through-hole kit that requires a Raspberry Pi Pico or any RP2040 clone, which makes it a fairly cheap & easy project!

### Features

- **Full NKRO (N-Key Rollover):** The M0116 keyboard is known for having a limiting 2KRO logic. This custom PCB eliminates this restriction, ensuring a surefire experience during intense gaming and typing sessions.
- **Solenoid Support:** A little party trick for when you wanna annoy your roommate... and yourself!
- **QMK/Vial Support:** Powerful reprogrammability, coupled with the user-friendly Vial configurator!
- **Multi-Layout Compatibility**: The PCB is designed to accommodate both M0116 and M0118 layouts.
 
### Keyboard Specifications
|	Info		|	Description			|
|	------------	|	------------			|
|	Years of prod.	|	1987—1990			|
|	Branding	|	Apple Computers Inc.		|
|	Model		|	Standard Keyboard		|
|	Part No.	|	M0116/M0118			|

# Assembling
### Prerequisites

|	Q		|	Item		|	Description		|	Importance		|	Example											|
|	------------	|----			|	------------		|	------------		|	------------										|
|	x1		|	Controller	|	RP2040			|	*Mandatory*		|	[Raspberry Pi Pico](https://www.aliexpress.com/item/1005003928558306.html)		|
|	x81		|	Diodes		|	DO-35			|	*Mandatory*		|	[1N4148](https://www.aliexpress.com/item/4001126137167.html)				|
|	x40 		|	Pin Headers	|	—			|	Optional		|	[40x Top bending DW](https://www.aliexpress.com/item/4000660389713.html)		|


- [Vial](https://get.vial.today/) will be required for verification. Please ensure that it's installed and running correctly.
- M0118 keyboards use an ISO layout, which will need 84 diodes instead. Their location on the PCB is denoted by a symbol.
- The Pin Headers listed above can make assembly easier.
- A decent soldering iron and a pair of sharp wire-cutters are recommended!

## Flashing
This section will cover how you can easily flash your RP2040-based controller. My unit was a cheap clone I bought off of AliExpress.

1. Download the .uf2 firmware file:

2. Set your Raspberry Pi Pico into Bootloader:
	- Press the BOOT and RST buttons simultaneously.
<img src='https://github.com/Bitteneite/bitten_restoboards/blob/main/photos/prep-1.jpg ' width='500'>

3. A new device should be connected to your computer. Open the device directory:
<img src='https://github.com/Bitteneite/bitten_restoboards/blob/main/photos/prep-2.jpg ' width='750'>

4. Drag the .uf2 file into your newly connected device:
	- Your RP2040 controller should reboot in a second.
<img src='https://github.com/Bitteneite/bitten_restoboards/blob/main/photos/prep-3.jpg ' width='750'>

✅ If you've done everything correctly, Vial should now recognize your RP2040 controller as an M0116 keyboard!
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/vial_preview.png ' width='750'>

## Building
This section will guide you through the process of assembling your PCB. 
_Be prepared for extensive use of your soldering iron and wire-cutter!_

1. Install the 1N4148 diodes into the PCB:
	- Some diode locations are dedicated only to the M0118 layout! You can safely ignore them.
	- To secure the diode in place before soldering, try bending down the diode on the other side.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/assemb-1.jpg ' width='500'>

2. Install the Pin Headers onto your RP2040 controller the "incorrect" way:
	- This will minimize the height final of your RP2040 controller and avoid clearance issues.
	- You can just solder the 4 corners, for now.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/assemb-2.jpg ' width='500'>

3. Solder your RP2040 controller onto the PCB:
	- Solder all the pins. The solder should flow into the RP2040 controller's pads.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/assemb-3.jpg ' width='500'>

4. Short each switch manually using a pair of tweezers:
	- Verify that each switch is triggering reliably.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/placeholder.png ' width='500'>

5. Once verified, snip off the protruding pins for a cleaner look:
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/placeholder.png ' width='500'>

✅ Congratulations! Your PCB is now ready for installation!

# Solenoid (Optional)

This section will guide you through the process of installing all the components needed for a solenoid!
There are five components to install, but you can install them in any order.

### Prerequisites

|	Q		|	Item		|	Description		|	Importance		|	Example									|
|	------------	|----			|	------------		|	------------		|	------------								|
|	x1 		|	MOSFET		|	TIP120			|	*Mandatory*		|	[Link](https://www.aliexpress.com/item/1005006131704396.html)		|
|	x1 		|	Capacitor 	|	2.2 — 4.7uF		|	*Mandatory*		|	[Link](https://www.aliexpress.com/item/4000822340335.html)		|
|	x1 		|	Resistor	|	1k — 10k Ω		|	*Mandatory*		|	[Link](https://www.aliexpress.com/item/32660635741.html)		|
|	x2 		|	Pin Header	|	—			|	Optional		|	[40x Top bending DW](https://www.aliexpress.com/item/4000660389713.html)	|
|	x2 		|	Jumper Cable	|	Female End		|	Optional		|	[Link](https://www.aliexpress.com/item/1005006050213130.html)		|


- [Vial](https://get.vial.today/) will be required for configuration. Please ensure that it's installed and running correctly.
- The PCB can power the solenoid without the Capacitor and Resistor, but it will be much less reliable.
- You can solder the solenoid into the PCB directly without the Pin Headers, but this is not recommended.

TIP120:

<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/sol_mosfet.png ' width='250'>

2.2uF — 4.7 uF Capacitor:

<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/sol_capacitor.png ' width='250'>

1k — 10k Ω Resistor:

<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/sol_resistor.png ' width='250'>

DO-35 Diode:

<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/sol_diode.png ' width='250'>

Male Pin Headers:

<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/sol_pin_header.png ' width='250'>

Solenoid Headers:

<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/placeholder.png ' width='250'>

✅ Congratulations! You can now configure your solenoid in Vial.

# Detachable Cable (Optional)
At this point, your M0116 PCB is ready to go! However, if you're like to give it that finishing touch, you should wire up a custom connector!

### Prerequisites

|	Q		|	Item		|	Description		|	Importance		|	Example											|
|	------------	|----			|	------------		|	------------		|	------------										|
|	x1 		|	Type-C Socket	|	Cable Port		|	Mandatory		|	[Link](https://www.aliexpress.com/item/1005005565293821.html)				|
|	x1 		|	Type-C Cable	|	Any old cable		|	Optional		|	—											|

- The Type-C socket I bought fitted without any modification, but you can still use any socket you like!
- You'll need to chop up a Type-C cable and wire it up correctly, so basic cable-making knowledge is recommended.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/socket-example-1.jpg ' width='500'>
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/socket-example-2.jpg ' width='500'>
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/socket-example-3.jpg ' width='500'>

## My Build
(Video here)
(Modlist here)
[Restoration Log](https://photos.app.goo.gl/cXroJ1pDgp9bM6tA6)

## Contact

👤 **Abdullah Al-Marzouqi**

- Github: https://github.com/Bitteneite
- Discord: @BittenEite
- Instagram: [@bitteneite](https://www.instagram.com/bitteneite/)
