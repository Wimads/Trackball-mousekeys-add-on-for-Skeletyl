# Trackball and mousekey add-on for Bastardkb Skeletyl


![](https://github.com/Wimads/Trackball-mousekeys-add-on-for-Skeletyl/blob/main/Images/2022-10-30%2017.02.23.jpg)

![](https://github.com/Wimads/Trackball-mousekeys-add-on-for-Skeletyl/blob/main/Images/2022-10-30%2016.09.59.jpg)

![](https://github.com/Wimads/Trackball-mousekeys-add-on-for-Skeletyl/blob/main/Images/2022-10-30%2016.10.34.jpg)

This add-on is designed around the following components:
* Unmodified Skeletyl_v3v7 case (compatibility with earlier or newer versions of the case has not been tested).
* 34mm trackball (like the one in a logitech M575)
* Tindie PWM3360 sensor pcb (for its compact size as compared to the charybdis sensor pcb)
* Same roller bearings as Charybdis (MR63-3x6x2.5mm)
* 2x M3x5x5 heated screw inserts (for mounting the trackball holder to the plate) (make sure you print in a material that can take heated screw inserts)
* 2x M3x10 countersunk screws (for mounting the trackball holder to the plate)
* 3x M3x8 set screws (for mounting the rollers)
* The mousekey plate is designed for MX switches.
* Requires 2 diodes for the mousekey plate.

![](https://github.com/Wimads/Trackball-mousekeys-add-on-for-Skeletyl/blob/main/Images/Screenshot%202022-10-15%20174640.jpg)
![](https://github.com/Wimads/Trackball-mousekeys-add-on-for-Skeletyl/blob/main/Images/Screenshot%202022-10-15%20174837.jpg)


**How is this different from a Charybdis?**

1. This is meant to be an add-on for an existing skeletyl build (ie, you already built a skeletyl, and decided you want a trackball as well). It doesn't require a modified case, so you don't have to build an entirely new board and trash your skeletyl. You can simply add it to your existing skeletyl. 
2. The ball position is slightly different, and intended to be used by your middle finger/ring finger, instead of the thumb.
3. It doesn't sacrifice a thumb key on the trackball side.
4. For the other keyboard half there is an add-on for 2 mouse keys, so you don't have to mess around with layers to use the mouse.


**Wiring trackball and mousekeys**

How to wire up the trackball sensor and the mousekeys will depend on your existing skeletyl build. Below are instructions for a Skeletyl V3, with the v1 Elite-c shield; if your setup is different, your wiring (and thus your firmware) will be different as well.

*Trackball sensor*

The trackball requires to use the MOSI, MISO and SCK pins of the elite-c, which are B1, B2 and B3. If you followed the build guide by bastardkb for v1 Elite-c shield, you will notice that these pins are already used by the key matrix, for column 4, 5 and 6. So you will need to rewire those columns. I have wired them as follows (if you want to use my firmware as a template, use these same pins):
* Column 4: F1 (was B1)
* Column 5: C7 (was B3)
* Column 6: D5 (was B2)
* Trackball MO: B2 (MOSI)
* Trackball MI: B3 (MISO)
* Trackball SC: B1 (SCLK)
* Trackball SS: F0
* Trackball GD: GND (any)
* Trackball VI: VCC

*Mousekeys*

I wired the mousekeys to the same row as the thumb cluster. The 3 thumb keys occupy C2R4, C4R4, C5R4; the mouse keys will be wired to C3R4, and C6R4. The columns require a diode, with the black line facing away from the switch.


**Firmware**

The basis for the firmware is the firmware for the bastardkb Charybdis
* To use this firmware, fork from qmk mainstream (https://github.com/qmk/qmk_firmware)
* Add your own keymap folder in keyboards/bastardkb/charybdis/3x5/keymaps/\[my keymap folder]
* Copy the firmware files from this repository into your keymap folder
* If your wiring is identical to mine, you are now good to go.
* For compiling the firmware: qmk compile -kb bastardkb/charybdis/3x5/v1/elitec -km \[my keymap folder]
* If your trackball side wiring is different than mine, you will need to adapt the config.h file accordingly
* If you didn't add the mousekeys, or wired them differently, you will also need to adapt the LAYOUT definition in the keymap.c file
* If you use a different MCU (not elite-c), you may need to adapt the rules.mk file as well.
