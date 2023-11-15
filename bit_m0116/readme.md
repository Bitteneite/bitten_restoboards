
<p align="center">
  <img align="center" width="500" src="https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/logo3.png" />
</p>

# QMK Firmware for Bittens Inc. M0116 PCB
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/placeholder.png ' width='1000'>



This repository contains the QMK firmware for a custom PCB designed for the vintage Apple M0116 keyboard. The PCB is a through-hole kit that requires a Raspberry Pi Pico or any RP2040 clone, along with approximately 81 diodes (or 84 diodes for M0118 keyboards).

## Keyboard Specifications
|	Info			|	Description				|
|	------------	|	------------			|
|	Years of prod.	|	1987—1990				|
|	Branding		|	Apple Computers Inc.	|
|	Model			|	Standard Keyboard		|
|	Part No.		|	M0116/M0118				|

## Features

- **Full NKRO (N-Key Rollover):** The M0116 keyboard is known for having a limiting 2KRO logic. Our custom PCB eliminates this restriction, ensuring a surefire experience during intense gaming and typing sessions.
- **QMK/Vial Support:** Utilize the vast potential of QMK firmware, coupled with the user-friendly simplicity of Vial configurator.
- **Multi-Layout Compatibility**: The PCB is designed to accommodate both M0116 and M0118 layouts, providing users with flexibility.
- **User-Friendly Assembly:** Enjoy a hassle-free assembly process with off-the-shelf components and a through-hole design.

## Prerequisites

|	Q		|	Item				|	Description				|	Example						|
|	------------		|----					|	------------					|	------------					|
|	x1					|	Controller		|	RP2040						|	[Raspberry Pi Pico](https://www.aliexpress.com/item/1005003928558306.html)		|
|	x81					|	Diodes			|	DO-35						|	[1N4148](https://www.aliexpress.com/item/4001126137167.html)		|
|	x1 	|	Type-C Socket|		Cable Port						|	[Link (Optional)](https://www.aliexpress.com/item/1005005565293821.html)		|
- Ensure that [Vial](https://get.vial.today/) is installed and running. It will be required for verification.

## Preparation

1. Download the .uf2 firmware file:

2. Set your Raspberry Pi Pico into Bootloader:
	- Press the BOOT and RST buttons simultaneously.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/placeholder.png ' width='500'>

3. A new device should be connected to your computer. Open the device directory:
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/placeholder.png ' width='500'>

5. Drag the .uf2 file into your newly connected device. Your RP2040 controller should reboot in a second!
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/placeholder.png ' width='500'>

## Assembling Instructions

1. Install the 1N4148 diodes into the PCB:
	- Some diodes locations are dedicated to the M0118 layout!
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/placeholder.png ' width='500'>

2. Place the Standoffs onto your RP2040 controller the "incorrect" way:
	- This will minimize the height of your RP2040 and avoid clearance issues.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/placeholder.png ' width='500'>

3. Solder your RP2040 controller onto the PCB:
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/placeholder.png ' width='500'>

4. Short each switch manually using a pair of tweezers:
	- Verify that each switch is triggering reliably.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/placeholder.png ' width='500'>

5. Once verified, snip off the protruding pins for a cleaner look:
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/placeholder.png ' width='500'>

Congratulations! Your PCB is now ready for installation!

## Customization
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/vial_preview.png ' width='1000'>


## Contact

👤 **Abdullah Al-Marzouqi**

- Github: https://github.com/Bitteneite
- Discord: @BittenEite
- Instagram: [@bitteneite](https://www.instagram.com/bitteneite/)
