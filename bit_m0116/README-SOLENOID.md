<p align="center">
  <img align="center" width="500" src="https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/logo3.png" />

  <h1 align="center">General Bittens Electrics Incorporated</h1>
  <h6 align="center">Special Keyboard Manufacturing & Restoration Division Ω 1992. No Rights Reserved</h6>
  
</p>

<br>

# Solenoid Installation

<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/sol_preview.jpg ' width='1000'>

This chapter will guide you through the process of installing all the components needed for a solenoid! *Let's annoy the entire house!*

### Prerequisites

|	Q		|	Item			|	Description		|	Importance		|	Example									|
|	------------	|----				|	------------		|	------------		|	------------								|
|	x1 		|	Solenoid		|	Any 5V Solenoid		|	*Mandatory*		|	[Link](https://www.aliexpress.com/item/1005002278950915.html)		|
|	x1 		|	MOSFET			|	TIP120			|	*Mandatory*		|	[Link](https://www.aliexpress.com/item/1005006131704396.html)		|
|	x1		|	Diode			|	DO-35			|	*Mandatory*		|	[1N4148](https://www.aliexpress.com/item/4001126137167.html)		|
|	x1 		|	Capacitor 		|	2.2 — 4.7uF		|	Recommended		|	[Link](https://www.aliexpress.com/item/4000822340335.html)		|
|	x1 		|	Resistor		|	1k — 10k Ω		|	Recommended		|	[Link](https://www.aliexpress.com/item/32660635741.html)		|
|	x2 		|	Bent Pin Headers	|	—			|	Optional		|	[40x Top bending DW](https://www.aliexpress.com/item/4000660389713.html)|
|	x2 		|	Jumper Cable		|	Female End		|	Optional		|	[Link](https://www.aliexpress.com/item/1005006050213130.html)		|


- [Vial](https://get.vial.today/) will be required for configuration. Please ensure that it's installed and running correctly.
- You _could_ power the solenoid without the Capacitor and Resistor, but over time, you might **potentially damage the RP2040 controller and/or the USB Port on your Motherboard!**
- You can solder the solenoid into the PCB directly without the Pin Headers, **but this is not recommended.**

## PCB Installation
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

## Solenoid Placement

Here is where you can get creative! You can now place your 5V solenoid's anywhere inside the M0116 case. Here's an example of how I did mine:

1. Place a piece of masking tape on the surface of where you'll mount your solenoid:
	- This will protect the surface on your M0116 case.
	- In case you wanna remove the solenoid, the tape should serve as a nice way to peel it off.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/sol_assemb_1.jpg ' width='500'>

2. (Optional) Cover the solenoid's Striking Surface:
	- I've glued a silicone phone case to deepen the pitch.
	- Experiment away! Different materials give off different sounds!
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/sol_assemb_2.jpg ' width='500'>

3. Put a dab of hot glue on your solenoid's mounting location:
	- As cursed as it may seem, hot glue is actually very easy to remove once it hardens! (Bless Garf)
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/sol_assemb_3.jpg ' width='500'>

4. Stick your solenoid on:
	- I've stuck my solenoid in reverse, which allows the rod to strike *on return.*
	- This particular setup allows you to fine-tune how loud your solenoid is, at the cost of having a "rattlier" sound signature.
<img src='https://raw.githubusercontent.com/Bitteneite/bitten_restoboards/main/photos/bit_m0116/sol_assemb_4.jpg ' width='500'>

<br>

✅ Wreak havoc! Get out there and blast some ears off!

https://github.com/Bitteneite/bitten_restoboards/assets/5614646/40085a2b-6066-43de-acd3-affa5b23a1a8

