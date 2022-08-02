# keyboard-layouts
qmk keyboard layout source files

Link to key codes: https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md

Here I am saving my qmk source files for custom keyboards

Keebs to add to the collection:
- Kyria
- Ferris Sweep

How to use/install my sofle layout:
- clone the qmk directory to your workspace using **QMK MSYS**
- move my "alex_sofle" directly into `user_home_directory/qmk_firmware/keyboards/sofle/keymaps`, (rename "alex_sofle" to whatever if you want)
- In QMK MSYS : `qmk compile -kb sofle/rev1 -km alex_sofle` (or whatever you changed it to)
- QMK saves hex files into qmk home `user_home_directory/qmk_firmware` find them
- Flash your keyboards with the hex files in **QMK Toolbox**, remember to flash both halfs seperately or it would only flash one half
You are all set!
