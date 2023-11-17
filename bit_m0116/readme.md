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

- **Full NKRO (N-Key Rollover):** The M0116 keyboard is known for having a limiting 2KRO logic. My custom PCB eliminates this restriction, ensuring a surefire experience during intense gaming and typing sessions.
- **QMK/Vial Support:** Utilize the vast potential of QMK firmware, coupled with the user-friendly simplicity of Vial configurator.
- **Multi-Layout Compatibility**: The PCB is designed to accommodate both M0116 and M0118 layouts, providing users with flexibility.
- **User-Friendly Assembly:** Enjoy a hassle-free assembly process with off-the-shelf components and a through-hole design.

### Keyboard Specifications
|	Info		|	Description			|
|	------------	|	------------			|
|	Years of prod.	|	1987—1990			|
|	Branding	|	Apple Computers Inc.		|
|	Model		|	Standard Keyboard		|
|	Part No.	|	M0116/M0118			|

## Prerequisites

|	Q		|	Item		|	Description		|	Example											|
|	------------	|----			|	------------		|	------------										|
|	x1		|	Controller	|	RP2040			|	[Raspberry Pi Pico](https://www.aliexpress.com/item/1005003928558306.html)		|
|	x81		|	Diodes		|	DO-35			|	[1N4148](https://www.aliexpress.com/item/4001126137167.html)				|
|	x1 		|	Type-C Socket	|	Cable Port		|	[Link (Optional)](https://www.aliexpress.com/item/1005005565293821.html)		|
- [Vial](https://get.vial.today/) will be required for verification. Please ensure that it's installed and running correctly.
- M0118 keyboards use an ISO layout, which will need 3 extra diodes. Their location on the PCB is denoted by a symbol.
- A decent soldering iron and a pair of sharp wire-cutters are recommended!

## Preparation
This section will cover how you can easily flash your RP2040-based controller. My unit was a cheap clone I bought off of AliExpress.

1. Download the .uf2 firmware file:

2. Set your Raspberry Pi Pico into Bootloader:
	- Press the BOOT and RST buttons simultaneously.
<img src='https://github.com/Bitteneite/bitten_restoboards/blob/main/photos/prep-1.jpg ' width='500'>

3. A new device should be connected to your computer. Open the device directory:
<img src='https://github.com/Bitteneite/bitten_restoboards/blob/main/photos/prep-2.jpg ' width='500'>

4. Drag the .uf2 file into your newly connected device:
	- Your RP2040 controller should reboot in a second.
<img src='https://github.com/Bitteneite/bitten_restoboards/blob/main/photos/prep-3.jpg ' width='500'>

✅ If you've done everything correctly, Vial should now recognize your RP2040 controller as an M0116 keyboard!
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/vial_preview.png ' width='500'>

## Assembling Instructions
This section will guide you through the process of assembling your PCB. 
_Be prepared for extensive use of your soldering iron and wire-cutter!_

1. Install the 1N4148 diodes into the PCB:
	- Some diode locations are dedicated only to the M0118 layout! You can safely ignore them.
	- To secure the diode in place before soldering, try bending down the diode on the other side.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/bit_m0116/photos/assemb-1.jpg ' width='500'>

2. Place the Standoffs onto your RP2040 controller the "incorrect" way:
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

## Detachable Cable (Optional)
At this point, your M0116 PCB is ready to go! However, if you're like to give it that finishing touch, you should look into wiring up a custom connector!
- You can use any socket of your choice. I just used this one because it fits in without modification.
- If you were to use the similar socket, you'll need to chop up a Type-C cable and wire it up correctly.
- Basic cable-making knowledge is recommended.
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
