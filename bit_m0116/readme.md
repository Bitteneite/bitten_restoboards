
<p align="center">
  <img align="center" width="500" src="https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/logo3.png" />
</p>

# QMK Firmware for Bittens Inc. M0116 PCB
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/m0116-built.jpg ' width='1000'>

This repository contains the QMK firmware for my custom PCB designed for the Apple M0116 keyboard. These are some of the best vintage keyboards ever made... _if it wasn't for their horrendous matrix._ By implementing NKRO, the keyboard becomes an absolute joy to use for a daily driver! Moreover, the M0116 has a very practical layout that really shines when combined with QMK/Vial. Oh and yeah, solenoids!
<br>
<br>
The PCB is a through-hole kit that requires a Raspberry Pi Pico or any RP2040 clone, which makes it a fairly cheap & easy project!

### Features

- **Full NKRO (N-Key Rollover):** The M0116 keyboard is known for having a limiting 2KRO logic. This custom PCB eliminates this restriction, ensuring a surefire experience during intense gaming and typing sessions.
- **Solenoid Support:** A little party trick for when you wanna annoy your roommate... and yourself!
- **Multi-Layout Compatibility**: The PCB is designed to accommodate both M0116 and M0118 layouts.
- **QMK/Vial Support:** Powerful reprogrammability, coupled with the user-friendly Vial configurator!
 
### Keyboard Specifications
|	Info		|	Description			|
|	------------	|	------------			|
|	Years of prod.	|	1987—1990			|
|	Branding	|	Apple Computers Inc.		|
|	Model		|	Standard Keyboard		|
|	Part No.	|	M0116/M0118			|

<br>

# Chapters
  <ol>
    <li>
      <a href="#assembling">Assembling</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#flashing">Flashing</a></li>
	<li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li>
      <a href="#solenoid-optional">Solenoid</a> (Optional)
      <ul>
        <li><a href="#prerequisites-1">Prerequisites</a></li>
        <li><a href="#installation-1">Installation</a></li>
      </ul>
    </li>
    <li>
      <a href="#detachable-cable-optional">Detachable Cables</a> (Optional)
      <ul>
        <li><a href="#prerequisites-2">Prerequisites</a></li>
        <li><a href="#installation-2">Installation</a></li>
      </ul>
    </li>
  </ol>

<br>

# Assembling

In this chapter, we will cover the bare minimum to get PCB up and running. _No frills, no thrills!_

### Prerequisites

|	Q		|	Item		|	Description		|	Importance		|	Example											|
|	------------	|----			|	------------		|	------------		|	------------										|
|	x1		|	Controller	|	RP2040			|	*Mandatory*		|	[Raspberry Pi Pico](https://www.aliexpress.com/item/1005003928558306.html)		|
|	x81		|	Diodes		|	DO-35			|	*Mandatory*		|	[1N4148](https://www.aliexpress.com/item/4001126137167.html)				|
|	x40 		|	Pin Headers	|	—			|	Optional		|	[40x Top bending DW](https://www.aliexpress.com/item/4000660389713.html)		|


- [Vial](https://get.vial.today/) will be required for verification. Please ensure that it's installed and running correctly.
- M0118 keyboards use an ISO layout, which will need 84 diodes instead. Their location on the PCB is denoted by a symbol.
- The Pin Headers listed above can make assembly easier. Otherwise, the pin headers included with your Raspberry Pi Pico will do.
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

## Installation
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

<br>

# Solenoid (Optional)

This chapter will guide you through the process of installing all the components needed for a solenoid!
There are six components to install, but you can install them in any order.

### Prerequisites

|	Q		|	Item		|	Description		|	Importance		|	Example									|
|	------------	|----			|	------------		|	------------		|	------------								|
|	x1 		|	MOSFET		|	TIP120			|	*Mandatory*		|	[Link](https://www.aliexpress.com/item/1005006131704396.html)		|
|	x1		|	Diode		|	DO-35			|	*Mandatory*		|	[1N4148](https://www.aliexpress.com/item/4001126137167.html)		|
|	x1 		|	Capacitor 	|	2.2 — 4.7uF		|	Recommended		|	[Link](https://www.aliexpress.com/item/4000822340335.html)		|
|	x1 		|	Resistor	|	1k — 10k Ω		|	Recommended		|	[Link](https://www.aliexpress.com/item/32660635741.html)		|
|	x2 		|	Pin Header	|	—			|	Optional		|	[40x Top bending DW](https://www.aliexpress.com/item/4000660389713.html)|
|	x2 		|	Jumper Cable	|	Female End		|	Optional		|	[Link](https://www.aliexpress.com/item/1005006050213130.html)		|


- [Vial](https://get.vial.today/) will be required for configuration. Please ensure that it's installed and running correctly.
- You _could_ power the solenoid without the Capacitor and Resistor, but it will be **much less reliable.**
- You can solder the solenoid into the PCB directly without the Pin Headers, but this is not recommended.

## Installation
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

<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/sol_header.jpg ' width='250'>

✅ Congratulations! You can now configure your solenoid in Vial.

<br>

# Detachable Cable (Optional)
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/socket-preview.jpg ' width='1000'>
At this point, your M0116 PCB is ready to go! However, if you're like to give it that finishing touch, you should wire up a custom connector!

### Prerequisites

|	Q		|	Item		|	Description		|	Importance		|	Example											|
|	------------	|----			|	------------		|	------------		|	------------										|
|	x1 		|	Type-C Socket	|	Cable Port		|	*Mandatory*		|	[Link](https://www.aliexpress.com/item/1005005565293821.html)				|
|	x1 		|	Type-C Cable	|	Any old cable		|	Optional		|	—											|

- The Type-C socket I bought fitted without any modification, but you can still use any socket you like!
- You'll need to chop up a Type-C cable and wire it up correctly, so basic cable-making knowledge is recommended.
## Installation
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/socket-example-1.jpg ' width='500'>
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/socket-example-2.jpg ' width='500'>
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/socket-example-3.jpg ' width='500'>

<br>

# My Build
(Video here)

Modifications:
- Click-modded with leafs from SKCM Whites.
- 2mm EVA Foam on the bottom case.

[Restoration Log](https://photos.app.goo.gl/cXroJ1pDgp9bM6tA6)

<br>

# Contact

👤 **Abdullah Al-Marzouqi**

- Github: https://github.com/Bitteneite
- Discord: @BittenEite
- Instagram: [@bitteneite](https://www.instagram.com/bitteneite/)
