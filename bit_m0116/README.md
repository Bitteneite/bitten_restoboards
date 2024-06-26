
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

<h6 align="center">✅ Easy as pie; monkey business not required.</h6>


# Assembling your PCB

<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/assemb_preview.jpg ' width='1000'>

In this chapter, we'll cover the bare minimum to get this PCB up and running. _No frills, no thrills!_

### Prerequisites

|	Q		|	Item			|	Description		|	Importance		|	Example											|
|	------------	|----				|	------------		|	------------		|	------------										|
|	x1		|	Controller		|	RP2040			|	*Mandatory*		|	[Raspberry Pi Pico](https://www.aliexpress.com/item/1005003928558306.html)		|
|	x81		|	Diodes			|	DO-35			|	*Mandatory*		|	[1N4148](https://www.aliexpress.com/item/4001126137167.html)				|


- A [flush-cutter](https://www.aliexpress.com/item/1005005546916111.html) is recommended!
- [Vial](https://get.vial.today/) will be required for verification. Please ensure that it's installed and running correctly.
- M0118 keyboards use an ISO layout, which will need 84 diodes instead. Their locations are denoted by a symbol on the PCB.

## Preparing your RP2040 Controller
This section will cover how you can easily flash your RP2040-based controller. My unit was a cheap clone I bought off of AliExpress.

1. Get the .uf2 firmware file: [Visit the Releases page to download the latest version.](https://github.com/Bitteneite/bitten_restoboards/releases/tag/m0116-v2.0.1)

2. Set your RP2040 Controller into **Bootloader Mode**:
	- Press the **BOOT** and **RST** buttons simultaneously.
<img src='https://github.com/Bitteneite/bitten_restoboards/blob/main/photos/prep-1.jpg ' width='500'>

3. **Flash** your RP2040 Controller:
	- If the previous step was done correctly, you should see a new device connected to your computer.
	- Open the new directory, and drag the .uf2 file into it.
	- Your RP2040 Controller should **reboot** in a second.
<p float="left">
	<img src='https://github.com/Bitteneite/bitten_restoboards/blob/main/photos/prep-2.jpg ' width='500'>
	<img src='https://github.com/Bitteneite/bitten_restoboards/blob/main/photos/prep-3.jpg ' width='500'>
</p>

4. Open **Vial** & Verify:
	- If you've done everything correctly, your RP2040 Controller should now be recognized as "Apple Standard Keyboard".
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/vial_preview.png ' width='750'>

<h6 align="center">✅ Congratulations! The monkey-brain of your M0116 PCB is now firing on all 2 braincells!</h6>

## Installation
This section will guide you through the process of assembling your PCB. 
_Be prepared for extensive use of your soldering iron and wire-cutter!_

1. Solder the **1N4148** diodes into the PCB:
	- **Direction is important!** Follow the symbol on the PCB.
	- Some diode locations are dedicated only to the M0118 layout!
	- _Tip: To secure the diode in place before soldering, try bending down the legs on the other side!_
<p float="left">
	<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/assemb-1.jpg ' width='500'>
	<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/assemb-1b.jpg ' width='500'>
</p>

2. Mount the Pin Headers the incorrect way:
	- Insert the Pin Headers from the top, rather then from the bottom.
	- Don't seat the Pin Headers all the way in. Keep a good height!
	- This allows us to snip the Pin Headers more easily and apply solder on the top-side.
<p float="left">
  <img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/assemb-2-alt1.jpg ' width='500'>
</p>

3. Solder the Pin Headers onto the controller:
	- Solder **only** the 4 corners.
	- **Warning:** Keep the solder to a minimum! The protruding legs need to be as thin as possible.
<p float="left">
  <img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/assemb-2-alt2.jpg ' width='500'>
</p>

4. Solder your controller onto the PCB:
	- **Note:** If the controller doesn't "seat" in all the way, go back to Step 3 and suck out any solder left on the protruding legs.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/assemb-2-alt3.jpg ' width='500'>
</p>

5. Snip off the protruding pins for a cleaner look:
	- Use a flush-cutter to snip off the rest of the Pin Headers.
<p float="left">
	<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/assemb-2-alt4.jpg ' width='500'>
</p>

6. Solder the top side of the controller:
	- That's it! The PCB should be fully-functional now.
<p float="left">
	<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/assemb-2-alt5.jpg ' width='500'>
</p>

7. Verify that each switch is triggering reliably:
	- Plug in the RP2040 Controller, open **Vial**, and check the "Matrix Tester" tab.
	- Short each switch manually using a pair of tweezers. The key should light up in Vial.
	- **Troubleshooting 1:** If a single switch doesn't trigger, check the solder joint on the nearby **diode**.
	- **Troubleshooting 2:** If an entire row/column doesn't trigger, check the associated solder joint on the **RP2040 Controller**.
<p float="left">
	<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/assemb-4b.gif ' width='500'>
</p>

<br>

<h6 align="center">✅ Congratulations! Your PCB is now ready for installation!</h6>

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

# Contact

👤 **Abdullah Al-Marzouqi**

- Discord: @BittenEite
- Instagram: [@bitteneite](https://www.instagram.com/bitteneite/)

<br>

_For damage, sales or directions for use, call Bittens Inc. at 186-555-4196 who assumes full liability in the manufacture of this product. Actually, don't call us; send us a message on Discord instead. The Bittens Inc. company is an unregistered parody organization which is completely made up by someone’s monkey brains. All external references are used under no damn license by Bittens Inc. Ω 1992. No rights reserved._
