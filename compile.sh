#!/usr/bin/env bash
rm -f .build/gmmk_pro_rev1_ansi_kevinchatham.bin
rm -f .build/gmmk_pro_rev1_ansi_kevinchatham.hex
rm -f .build/gmmk_pro_rev1_ansi_kevinchatham.elf
rm -f gmmk_pro_rev1_ansi_kevinchatham.bin
qmk compile -kb gmmk/pro/rev1/ansi -km kevinchatham
