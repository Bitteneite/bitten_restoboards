
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
      <a href="#detachable-cable-optional">Detachable Cable</a> (Optional)
      <ul>
        <li><a href="#prerequisites-2">Prerequisites</a></li>
        <li><a href="#installation-2">Installation</a></li>
      </ul>
    </li>
  </ol>

<br>

# Assembling

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

3. Set your Raspberry Pi Pico into Bootloader:
	- Press the **BOOT** and **RST** buttons simultaneously.
<img src='https://github.com/Bitteneite/bitten_restoboards/blob/main/photos/prep-1.jpg ' width='500'>

4. A new device should now be connected to your computer. Open the device directory:
<img src='https://github.com/Bitteneite/bitten_restoboards/blob/main/photos/prep-2.jpg ' width='750'>

5. Drag the .uf2 file into your newly connected device:
	- Your RP2040 controller should **reboot** in a second.
<img src='https://github.com/Bitteneite/bitten_restoboards/blob/main/photos/prep-3.jpg ' width='750'>

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

<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/sol_preview.jpg ' width='1000'>

This chapter will guide you through the process of installing all the components needed for a solenoid! *Let's annoy the entire house!*

### Prerequisites

|	Q		|	Item			|	Description		|	Importance		|	Example									|
|	------------	|----				|	------------		|	------------		|	------------								|
|	x1 		|	MOSFET			|	TIP120			|	*Mandatory*		|	[Link](https://www.aliexpress.com/item/1005006131704396.html)		|
|	x1		|	Diode			|	DO-35			|	*Mandatory*		|	[1N4148](https://www.aliexpress.com/item/4001126137167.html)		|
|	x1 		|	Capacitor 		|	2.2 — 4.7uF		|	Recommended		|	[Link](https://www.aliexpress.com/item/4000822340335.html)		|
|	x1 		|	Resistor		|	1k — 10k Ω		|	Recommended		|	[Link](https://www.aliexpress.com/item/32660635741.html)		|
|	x1 		|	Solenoid		|	Any 5V Solenoid		|	Recommended		|	[Example](https://www.aliexpress.com/item/1005002278950915.html)		|
|	x2 		|	Bent Pin Headers	|	—			|	Optional		|	[40x Top bending DW](https://www.aliexpress.com/item/4000660389713.html)|
|	x2 		|	Jumper Cable		|	Female End		|	Optional		|	[Link](https://www.aliexpress.com/item/1005006050213130.html)		|


- [Vial](https://get.vial.today/) will be required for configuration. Please ensure that it's installed and running correctly.
- You _could_ power the solenoid without the Capacitor and Resistor, but over time, this can **potentially damage your RP2040 controller and/or USB Port on your Motherboard.**
- You can solder the solenoid into the PCB directly without the Pin Headers, but this is not recommended.

## Installation
There are 6 independent components to install, but you can install them in any order!

### TIP120
- **Before** installation, bend the 3 protruding pins into a 90° angle.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/sol_mosfet.png ' width='350'>

<br>

### 2.2uF — 4.7 uF Capacitor
- Ensure you install it correctly. Follow the symbol on the PCB.
- **WARNING:** Incorrect installation could make things go explodey!
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/sol_capacitor.png ' width='350'>

<br>

### 1k — 10k Ω Resistor
- Same trick with the diodes. Bend the legs down on the other side to secure it before soldering!
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/sol_resistor.png ' width='350'>

<br>

### DO-35 Diode
- **Direction is important!** Follow the symbol on the PCB.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/sol_diode.png ' width='350'>

<br>

### Male Pin Headers
- We need to connect our solenoid in a **detachable** manner. 
- Any connector would work (ex. JST Plug Connectors), but we can re-use our [Bent Pin Headers](https://www.aliexpress.com/item/4000660389713.html).
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/sol_pin_header.png ' width='350'>

<br>

### Solenoid Headers
- Same points apply as <a href="#male-pin-headers">previously mentioned.</a>
- Direction doesn't matter. You can reverse the pins and the solenoid should still work.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/sol_header.jpg ' width='350'>

<br>

✅ Congratulations! You can now configure your solenoid in Vial.
- All the necessary Solenoid Controls are located in **Layer 2** with the [default keymaps](https://github.com/Bitteneite/bitten_restoboards/tree/main/bit_m0116/keymaps).

<br>

# Detachable Cable (Optional)
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/socket-preview.jpg ' width='1000'>
At this point, your M0116 PCB is ready to go! However, if you're like to give it that finishing touch, you should wire up a custom connector!

### Prerequisites

|	Q		|	Item		|	Description		|	Importance		|	Example											|
|	------------	|----			|	------------		|	------------		|	------------										|
|	x1 		|	Type-C Socket	|	Detachable Cable Port	|	*Mandatory*		|	[4-Pin](https://www.aliexpress.com/item/1005005565293821.html)				|
|	x1 		|	Type-C Cable	|	Any old cable		|	Optional		|	—											|

- The Type-C socket linked above can fit without any modification, but you can still use any socket you like!
- You'll need to chop up a Type-C cable and wire it up correctly, so basic cable-making knowledge is recommended.
## Installation

1. Chop up a Type-C cable, and wire it up correctly to the socket:
	- You're gonna need to use your cable-making knowledge to figure out the pins.
	- Using heatshrinks can make the job look a lot cleaner.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/socket-example-1.jpg ' width='500'>

2. Secure the socket into the case.
	- To get some leverage, plug in a Type-C cable, hold down the nut in place, and start rotating the socket by the plugged cable.
	- While rotating the housing, the individual wires can twist up. Be sure to occasionally un-twist them while rotating the housing!
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/socket-example-2.jpg ' width='500'>

✅ Congratulations! You can now plug in any Type-C cable of your choice.

<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/socket-example-3.jpg ' width='500'>

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
