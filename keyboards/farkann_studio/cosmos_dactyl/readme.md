# Skree/Cosmos Dactyls


Skree's keyboards are custom made keyboards built by Skree LLC, after using the [cosmos](https://ryanis.cool/cosmos/beta) configurator to have the initial footprint.

This folder is architectured as follow:

`skree/cosmos_dactyl`: -> root directory, where common configuration files are found, including the default `config.h` and `info.json`
`<keyboard_folder>` -> keyboard folders are built as follow:
    `<row>x<column>_<left_cluster>x<right_cluster>_<option(s)>` where:
    `<row>`: the amount of rows the keyboard has
    `<column>`: the amount of columns the keyboard has
    `<left_cluster>`: the amount of keys in the left thumb cluster
    `<right_cluster>`: the amount of keys in the right thumb cluster
    `<option(s)>`: options can be one or more from the following list, separated by `_`:
        `ltrackball`: trackball on the left side
        `rtrackball`: trackball on the right side
        `trackballs`: trackballs on both side
        `lencoder`: encoder on the left side
        `rencoder`: encoder on the right side
        `encoders`: encoders on both side

*A short description of the keyboard/project*

* Keyboard Maintainer: [Marshall](https://github.com/WainingForests)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make skree/trackball:default

Flashing example for this keyboard:

    make skree/trackball:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

TODO: add the bootloader usage
Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
