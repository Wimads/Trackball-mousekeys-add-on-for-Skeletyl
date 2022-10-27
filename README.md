# Trackball and mousekey add-on for Bastardkb Skeletyl




This add-on is designed around the following components:
* Unmodified Skeletyl_v3v7 case (compatibility with earlier or newer versions of the case has not been tested).
* 34mm trackball (like the one in a logitech M575)
* Tindie PWM3360 sensor pcb (for its compact size as compared to the charybdis sensor pcb)
* Same roller bearings as Charybdis (MR63-3x6x2.5mm)
* 2x M3x5x5 screw inserts (for mounting the trackball holder to the plate)
* 2x M3x10 countersunk screws (for mounting the trackball holder to the plate)
* 3x M3x8 set screws (for mounting the rollers)
* The mousekey plate is designed for MX switches.
* Requires 2 diodes for the mousekey plate.

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
I wired the mousekeys to the same row as the thumb cluster. The 3 thumb keys occupy C2R4, C4R4, C5R5; the mouse keys will be wired to C3R4, and C6R4. The columns require a diode, with the black line facing away from the switch.

**Firmware**
For the firmware I have adapted the charybdis frimware. You can use the charybdis firmware on qmk mainstream (bastardkb/charybdis/3x5). Make your own keymap folder, and add the firmware files from this repository in your keymapfolder. If your wiring is identical to mine, you should be good to go! If you wired to different pins than me, need to change the config.h file accordingly. If you didn't add the mouse keys, or wired them differently, you will need to adapt the 3x5.h and info.json files as well.


Note that this mod may require some rewiring of the pinouts on the mcu to the keymatrix, and will require adapting the charybdis firmware, so some basic technical knowledge is required for this mod.

![](https://raw.githubusercontent.com/Wimads/Trackball-mousekey-add-on-for-Bastardkb-Skeletyl-v3v7/main/Screenshot%202022-10-15%20174640.jpg)

![](https://raw.githubusercontent.com/Wimads/Trackball-mousekey-add-on-for-Bastardkb-Skeletyl-v3v7/main/Screenshot%202022-10-15%20174837.jpg)

**!! This project is still in development, current status:**
* 3D design is complete. Source CAD files are on OnShape: https://cad.onshape.com/documents/c7d31654920783cf2170d04f/w/e26ac92a8d6e84ba2575ffdb/e/2fa55001fc01750eb4b64711?renderMode=0&uiState=63557264c8e5e51759919a06
* STL files are uploaded, and prints have been ordered from JLCPCB. *NOTE:* these are designed for MJF or SLS prints that do not require supports. If printing by FDM, you may face issues with overhang of the cutouts for the the rubber bumpers in the bottom plates, for which adding supports may not be very practical. If you want to print by FDM, I recommend editing the source file to remove those cutouts.
* Sensor has arrived and has been wired up (requiring rewiring of elite-c for pinouts of the keymatrix as well, since those were occupying the pinouts required for the trackball). Depending on your version of the skeletyl (v1 or v2 shield, or different mcu), this may be different for you.
* Charybdis firmware was succesfully adapted. The required modifications in the firmware are highly dependend on your version of the skeletyl and how you have wired it up though, so haven't added my firmware adaptations to this repository. If you want to build this for yourself and cannot figure out the firmware, shoot me a message here, or on the bastardkb discord server.
* Waiting for 3D prints to arrive to put everything together. So the 3D design has not yet been tested IRL, and may still contain design errors, print at your own risk.
* if there appears to be a lot of interest, I may write some basic build instructions and pointers on how to adapt the firmware.

