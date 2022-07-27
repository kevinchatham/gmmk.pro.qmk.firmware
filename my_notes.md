# Quantum Mechanical Keyboard Firmware

Light theme colors based on animal crossing keycaps. Keypress triggers random pick from color theme which is applied to the key and random side led before fading off after a period of time. The effect is elegant and not too distracting.

Derived from : `gmmk/pro/rev1/ansi/keymaps/gourdo1` (many many thanks!)

Keyboard : `gmmk/pro/rev1/ansi`

Keymap : `gmmk/pro/rev1/ansi/keymaps/kevinchatham`

Install QMK CLI : `brew install qmk/qmk/qmk`

More deps : https://github.com/osx-cross/homebrew-avr

And more deps : https://formulae.brew.sh/formula/cmake

Compile : `qmk compile -kb gmmk/pro/rev1/ansi -km kevinchatham`

EZ Compile : `chmod +x compile.sh && sh compile.sh`
