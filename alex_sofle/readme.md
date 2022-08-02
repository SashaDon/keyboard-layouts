**My custom Sofle v1 42 key layout:**

![sofle layout](https://user-images.githubusercontent.com/2576834/182282204-0d409030-e7c1-42d5-bbb8-314655049f8a.jpg)
The bottom three layers are a toggle not hold.

*Features*:
- Oled Displays
- Fully custom lower and raise layers to fit me personally.
- Mouse Layer, Keypad Layer
- Has a gaming layer which makes swaps the main buttons on the halves putting the space on the left active side.
- Multiple layout support (Qwerty and Dvorak)
- Support for russian typing
- Support for Mac and Windows

*How to use/install my sofle layout*:
- clone the qmk directory to your workspace using **QMK MSYS**
- move my "alex_sofle" directly into `user_home_directory/qmk_firmware/keyboards/sofle/keymaps`, (rename "alex_sofle" to whatever if you want)
- In QMK MSYS : `qmk compile -kb sofle/rev1 -km alex_sofle` (or whatever you changed it to)
- QMK saves hex files into qmk home `user_home_directory/qmk_firmware` find them
- Flash your keyboards with the hex files in **QMK Toolbox**, remember to flash both halfs seperately or it would only flash one half
You are all set!

*Or you could just download and use the hex file!*

*Thoughts on QMK*:
My first introduction to qmk coding. Personally to me qmk is really cool, took a while to get the hang of the whole qmk thing. But I really like the whole process and really making something mine. From putting it together from scratch to programing it to suit my needs. Its just something you don't get from the off the shelf boards, but with qmk boards you can change anything at anypoint, if you don't like a key or you are missing something you can always add it and after you set everything up it only takes a couple of clicks!

*The layout*:
This board has really good key placements which are super comfortable to use, and after a while your hands don't get tired of typing or using the board. About the layout tho, This layout took me about 15 iterations, each time using less and less keys. Currently have a 42 key layout, want to try to lower it to 36 keys or 34 keys later. Also want to try out the kyria in the future or the ferris sweep, because of the alternate keyplacements and their formfactor.

- (42 key because I don't really use the top row, and the two side thumb buttons on each side, making 42 keys.)

*Putting it together*:
From unboxing to using it, it took me about 25 hours! had to solder every little thing to the pcb, which took around 20 hours of work, and like 5 more hours for lube and film the switches.