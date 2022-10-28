**Notes on firmware**

* To use this firmware, fork from qmk mainstream (https://github.com/qmk/qmk_firmware)
* Add your own keymap folder in keyboards/bastardkb/charybdis/3x5/keymaps/\[my keymap folder]
* Copy the firmware files from this repository into your keymap folder
* If your wiring is identical to mine, you are now good to go.
* For compiling the firmware: qmk compile -kb bastardkb/charybdis/3x5/v1/elitec -km \[my keymap folder]
* If your trackball side wiring is different than mine, you will need to adapt the config.h file accordingly
* If you didn't add the mousekeys, or wired them differently, you will also need to adapt the LAYOUT definition in the keymap.c file
* If you use a different MCU (not elite-c), you may need to adapt the rules.mk file as well.
