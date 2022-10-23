# Trackball and mousekey add-on for Bastardkb Skeletyl

The add-on is designed around the following components:
* Unmodified Skeletyl_v3v7 case (compatibility with earlier or newer versions has not been tested, but should be easily adaptable).
* Tindie PWM3360 sensor pcb (for its compact size as compared to the charybdis sensor pcb)
* Same roller bearings as Charybdis (MR63-3x6x2.5mm)

**How is this different from a Charybdis?**
1. This is meant to be an add-on for an existing skeletyl build (ie, you already built a skeletyl, and decided you want a trackball as well). It doesn't require a modified case, so you don't have to build an entirely new board and trash your skeletyl. You can simply add it to your existing skeletyl. 
2. The ball position is slightly different, and intended to be used by your middle finger/ring finger, instead of the thumb.
3. It doesn't sacrifice a thumb key on the trackball side.
4. For the other keyboard half there is an add-on for 2 mouse keys, so you don't have to mess around with layers to use the mouse.

Note that this mod may require some rewiring of the pinouts on the mcu to the keymatrix, and will require adapting the charybdis firmware, so some basic technical knowledge is required for this mod.

![](https://raw.githubusercontent.com/Wimads/Trackball-mousekey-add-on-for-Bastardkb-Skeletyl-v3v7/main/Screenshot%202022-10-15%20174640.jpg)

![](https://raw.githubusercontent.com/Wimads/Trackball-mousekey-add-on-for-Bastardkb-Skeletyl-v3v7/main/Screenshot%202022-10-15%20174837.jpg)

**!! This project is still in development, current status:**
* 3D design is complete. Source CAD files are on OnShape: https://cad.onshape.com/documents/c7d31654920783cf2170d04f/w/e26ac92a8d6e84ba2575ffdb/e/2fa55001fc01750eb4b64711?renderMode=0&uiState=63557264c8e5e51759919a06
* STL files are uploaded, and prints have been ordered from JLCPCB. *NOTE:* these are designed for MJF or SLS prints that do not require supports. If printing by FDM, you may face issues with overhang of the cutouts for the the rubber bumpers in the bottom plates, for which adding supports may not be very practical. If you want to print by FDM, I recommend editing the source file to remove those cutouts.
* Sensor has arrived and has been wired up (requiring rewiring of elite-c for pinouts of the keymatrix as well, since those were occupying the pinouts required for the trackball). Depending on your version of the skeletyl (v1 or v2 shield, or different mcu), this may be different for you.
* Charybdis firmware was succesfully adapted. The required modifications in the firmware are highly dependend on your version of the skeletyl and how you have wired it up though, so haven't added my firmware adaptations to this repository. If you want to build this for yourself and cannot figure out the firmware, shoot me a message here, or on the bastardkb discord server.
* Waiting for 3D prints to arrive to put everything together.
* if there appears to be a lot of interest, I may write some basic build instructions and pointers on how to adapt the firmware.

