# Quantum Mechanical Keyboard Firmware

Light theme colors based on Animal Crossing keycaps. Keypress triggers random pick from color theme which is applied to the key and random side led before fading off after a period of time. The effect is elegant and not too distracting.

Derived from : `gmmk/pro/rev1/ansi/keymaps/gourdo1` ( many thanks! )

Keyboard : `gmmk/pro/rev1/ansi`

Keymap : `gmmk/pro/rev1/ansi/keymaps/kevinchatham`

Compile : `qmk compile -kb gmmk/pro/rev1/ansi -km kevinchatham`

Don't forget to clone all of the submodules with `git submodule init` and `git submodule update`

Windows

    https://msys.qmk.fm/

    Use QMK MSYS Shell to install dependencies, build, and compile.

Flashing

    https://github.com/qmk/qmk_toolbox

    Use QMK Toolbox for flashing. Put keyboard into flashing mode by holding Function + Escape.

    If you forget, the function key is two keys to the right of the space bar ( the fossil between the fish and butterfly )

    Select auto-flash and the bin file from ./.build/ after running qmk compile from above.

    MCU: ATmega32U4
    
Linux / Mac

    Install QMK CLI : `brew install qmk/qmk/qmk`

    More deps : https://github.com/osx-cross/homebrew-avr

    And more deps : https://formulae.brew.sh/formula/cmake

    EZ Compile : `chmod +x compile.sh && sh compile.sh`

<!--
ORIGINAL README

[![Current Version](https://img.shields.io/github/tag/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/tags)
[![Discord](https://img.shields.io/discord/440868230475677696.svg)](https://discord.gg/Uq7gcHh)
[![Docs Status](https://img.shields.io/badge/docs-ready-orange.svg)](https://docs.qmk.fm)
[![GitHub contributors](https://img.shields.io/github/contributors/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/pulse/monthly)
[![GitHub forks](https://img.shields.io/github/forks/qmk/qmk_firmware.svg?style=social&label=Fork)](https://github.com/qmk/qmk_firmware/)

This is a keyboard firmware based on the [tmk\_keyboard firmware](https://github.com/tmk/tmk_keyboard) with some useful features for Atmel AVR and ARM controllers, and more specifically, the [OLKB product line](https://olkb.com), the [ErgoDox EZ](https://ergodox-ez.com) keyboard, and the [Clueboard product line](https://clueboard.co).

## Documentation

* [See the official documentation on docs.qmk.fm](https://docs.qmk.fm)

The docs are powered by [Docsify](https://docsify.js.org/) and hosted on [GitHub](/docs/). They are also viewable offline; see [Previewing the Documentation](https://docs.qmk.fm/#/contributing?id=previewing-the-documentation) for more details.

You can request changes by making a fork and opening a [pull request](https://github.com/qmk/qmk_firmware/pulls), or by clicking the "Edit this page" link at the bottom of any page.

## Supported Keyboards

* [Planck](/keyboards/planck/)
* [Preonic](/keyboards/preonic/)
* [ErgoDox EZ](/keyboards/ergodox_ez/)
* [Clueboard](/keyboards/clueboard/)
* [Cluepad](/keyboards/clueboard/17/)
* [Atreus](/keyboards/atreus/)

The project also includes community support for [lots of other keyboards](/keyboards/).

## Maintainers

QMK is developed and maintained by Jack Humbert of OLKB with contributions from the community, and of course, [Hasu](https://github.com/tmk). The OLKB product firmwares are maintained by [Jack Humbert](https://github.com/jackhumbert), the Ergodox EZ by [ZSA Technology Labs](https://github.com/zsa), the Clueboard by [Zach White](https://github.com/skullydazed), and the Atreus by [Phil Hagelberg](https://github.com/technomancy).

## Official Website

[qmk.fm](https://qmk.fm) is the official website of QMK, where you can find links to this page, the documentation, and the keyboards supported by QMK.
-->
