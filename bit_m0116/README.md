
<p align="center">
  <img align="center" width="500" src="https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/logo3.png" />

  <h1 align="center">General Bittens Electrics Incorporated</h1>
  <h6 align="center">Special Keyboard Manufacturing & Restoration Division Ω 1992. No Rights Reserved</h6>
  
</p>

<br>

<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/m0116-built.jpg ' width='1000'>

Picture this... It's 1987, and you're an engineer tasked with the crucial job of designing a legendary keyboard for Apple's upcoming **Macintosh SE**. How would you sabotage it for future generations? If you answered "By implementing the worst 2KRO logic known to mankind", you'd be absolutely right! 🎉

So after mere *minutes* in research & design, **Bittens Incorporated** proudly presents you a drop-in replacement PCB with countless improvements:
- **NKRO (N-Key Rollover):** How do you do, fellow kids? Y'all like playing video games?
- **Solenoid Support:** Do you love annoying your loved ones... *and yourself?*
- **QMK/Vial:** Just plug in your keyboard, and remap your keys in Vial! ~We know you're too lazy for anything else.~
- **Multi-layout Compatibility:** We almost forgot about you, M0118 owners. *Almost!*

The PCB is a through-hole kit that requires a Raspberry Pi Pico and some diodes for basic functionality, making it a cheap & easy project to complete!

<br>

# Assembling your PCB

<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/assemb_preview.jpg ' width='1000'>

In this chapter, we'll cover the bare minimum to get this PCB up and running. _No frills, no thrills!_

### Prerequisites

|	Q		|	Item			|	Description		|	Importance		|	Example											|
|	------------	|----				|	------------		|	------------		|	------------										|
|	x1		|	Controller		|	RP2040			|	*Mandatory*		|	[Raspberry Pi Pico](https://www.aliexpress.com/item/1005003928558306.html)		|
|	x81		|	Diodes			|	DO-35			|	*Mandatory*		|	[1N4148](https://www.aliexpress.com/item/4001126137167.html)				|
|	x40 		|	Bent Pin Headers	|	—			|	Recommended		|	[40x Top bending DW](https://www.aliexpress.com/item/4000660389713.html)		|


- [Vial](https://get.vial.today/) will be required for verification. Please ensure that it's installed and running correctly.
- M0118 keyboards use an ISO layout, which will need 84 diodes instead. Their locations are denoted by a symbol on the PCB.
- The Bent Pin Headers listed above will make assembly easier, but the [Straight Pin Headers](https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/assemb-straight-header.jpg) included with your Raspberry Pi Pico can still work.
- A decent soldering iron and a pair of sharp wire-cutters are recommended!

## Flashing
This section will cover how you can easily flash your RP2040-based controller. My unit was a cheap clone I bought off of AliExpress.

1. Get the .uf2 firmware file: [Visit the Releases page to download the latest version.](https://github.com/Bitteneite/bitten_restoboards/releases/tag/m0116-v2.0.0)

2. Set your Raspberry Pi Pico into Bootloader:
	- Press the **BOOT** and **RST** buttons simultaneously.
<img src='https://github.com/Bitteneite/bitten_restoboards/blob/main/photos/prep-1.jpg ' width='500'>

3. Flash your Raspberry Pi Pico:
	- After going into Bootloader mode, a new device should be connected to your computer.
	- Open the directory, and drag the .uf2 file into it.
	- Your Raspberry Pi Pico should **reboot** in a second.
<img src='https://github.com/Bitteneite/bitten_restoboards/blob/main/photos/prep-2.gif ' width='750'>

<br>

✅ If you've done everything correctly, **Vial** should now recognize your RP2040 controller as an M0116 keyboard!

<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/vial_preview.png ' width='750'>

## Installation
This section will guide you through the process of assembling your PCB. 
_Be prepared for extensive use of your soldering iron and wire-cutter!_

1. Solder the **1N4148** diodes into the PCB:
	- **Direction is important!** Follow the symbol on the PCB.
	- Some diode locations are dedicated only to the M0118 layout!
	- _Tip: To secure the diode in place before soldering, try bending down the legs on the other side!_
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/assemb-1.jpg ' width='500'>

2. Install the Pin Headers onto your RP2040 controller the "incorrect" way:
	- Insert the Pin Headers from the top, rather then from the bottom.
	- This will minimize the final height of your RP2040 controller and avoid clearance issues.
	- **Note 1:** If you're using the [Bent Pin Headers](https://www.aliexpress.com/item/4000660389713.html) mentioned previously, you will **not** need to solder it in.
	- **Note 2:** If you're using the [Straight Pin Headers](https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/assemb-straight-header.jpg) included with your Raspberry Pi Pico, solder it in, but **keep the solder to a minimum!** (The protruding legs need to be as thin as possible!)
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/assemb-2.jpg ' width='500'>
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/assemb-2a.gif ' width='500'>

3. Solder your RP2040 controller onto the PCB:
	- Before soldering, the RP2040 controller must "seat" in all the way.
	- **Note:** If you're using the [Straight Pin Headers](https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/assemb-straight-header.jpg) included with your Raspberry Pi Pico, and the controller doesn't "seat" in all the way, go back to Step 2 and suck out any solder left on the protruding legs.
	- Proceed to solder all the pins.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/placeholder.png ' width='500'>

4. Verify that each switch is triggering reliably:
	- Open **Vial** and check the "Matrix Tester" tab.
	- Short each switch manually using a pair of tweezers. The key should light up in Vial.
	- If a switch doesn't trigger, check the solder joint on the nearby **diode**.
	- If an entire row/column doesn't trigger, check the associated solder joint on the **RP2040 Controller**.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/placeholder.png ' width='500'>

5. **(Optional)** Snip off the protruding pins for a cleaner look:
	- If you're using the [Bent Pin Headers](https://www.aliexpress.com/item/4000660389713.html) mentioned previously, snip off at the "bend".
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/placeholder.png ' width='500'>

<br>

✅ Congratulations! Your PCB is now ready for installation!

<br>

# Solenoid (Optional)
- Installing a **Solenoid** will require a few extra off-the-shelf parts.
- For instructions, please [visit the README-SOLENOID.md file.](https://github.com/Bitteneite/bitten_restoboards/blob/main/bit_m0116/README-SOLENOID.md)
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/sol_preview.jpg ' width='500'>

# Detachable Cable (Optional)
- Installing a **Detachable Cable** is fairly simple, but requires basic cable-making knowledge.
- For instructions, please [visit the README-CABLE.md file.](https://github.com/Bitteneite/bitten_restoboards/blob/main/bit_m0116/README-CABLE.md)
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/socket-preview.jpg ' width='500'>

<br>

# My Build
(Video without solenoid here, soon™)<br>
(Video with solenoid here, soon™)

Modifications:
- Click-modded with leafs from SKCM Whites.
- 2mm EVA Foam on the bottom case.

[Restoration Log](https://photos.app.goo.gl/cXroJ1pDgp9bM6tA6)

<br>

# Contact

👤 **Abdullah Al-Marzouqi**

- Discord: @BittenEite
- Instagram: [@bitteneite](https://www.instagram.com/bitteneite/)

<br>

_For damage, sales or directions for use, call Bittens Inc. at 186-555-4196 who assumes no liability in the manufacture of this product. The Bittens Inc. company is an unregistered parody organization which is completely made up by someone’s monkey brains. All external references are used under no damn license by Bittens Inc. Ω1992. No rights reserved._
