
GEOS KERNAL v2.0 - commented source code
by Maciej 'YTM/Alliance' Witkowiak
6-6-99



DESCRIPTION
This archive contains FULL source code of GEOS KERNAL v2.0. It is 99% identical to original OS. There are some differences in BOOTER code (I've removed installation code because GEOS from this package comes 'cracked' and 'installed'; there are also few changes in order of bytes in some places which is caused by using macros, it doesn't affect the system).



DISCLAIMER
This package comes from full disassembling of GEOS. I did it for my own pleasure and my own purposes in my spare time. It is meant for customizing the code and not for making big bucks ;). Anyway if you want it or not you may develop own versions of GEOS KERNAL only if you have the rest of OS - DeskTop, applications and so.



REQUIREMENTS
The only tool you need is a registered TASS package by MMS/TABOO. It may be obtained from: http://taboo.eu.org.
You may use other crossassembler (this might be too heavy task for C64 assemblers ;), but they have to allow:
- including files
- macros
- conditional assembly
- including binary files (or including series of .byte xx... created by converting binary file)
Then you have to change assembler ops: .byte, .word etc, macro definitions (in GEOSMAC.INC), and all macro statements in all *.TAS files.



INSTALLATION
To bring up a working copy of GEOS simply type from the DOS prompt:
GEOS.BAT
Ignore 'file not found' error - the batch file is trying to remove old kernal.
In few moments the file GEOS.PRG will be generated. Prepare your new boot disk by copying DESKTOP, auto-execs (CONFIGURE, etc.), input driver (if different than compiled), printer driver, preferences on a blank disk. Then move GEOS.PRG into that disk. From now on you can boot GEOS by loading that file and simply running it.
If you are using plain TASS.EXE you will get a file with load (and start) address of $5000. Ignore four warning messages.



CUSTOMIZING
Look at the file EQU.INC: you may change some values there.
This code is 99% identical to original. GEOS KERNAL optimized and ready for Ram-Cart and +60K RAM expansions will be available soon.


FILES:
Files are distingushed by their extensions:
*.BIN - binary files
*.INC - include files with constants and macros
*.TAS - source code files



THE SOURCES
Sources are organized in specific way. You can distinguish the code by few indicators.

1) Labels
All labels are identical to original geosSym and geosMac files. All OS_JUMPTAB functions are preceded with '_'. For example EnterDeskTop is placed in jumptab as:

EnterDeskTop		JMP _EnterDeskTop
(...)	big chunk of heavy code ;)
_EnterDeskTop			; code for handling this function

All other names are meant to descript the purpose of the subroutine. It was not always possible to name them in this way, so you may find some UNK_xx, xxxHelp_xx and batches of procedures with the same name but different number e.g. Font11, Font12 etc.
TASS does not allow local labels so all local labels have abbreviated subroutine name with a number on its end.

2) Indentation
Code is indented in this way:
		[tab2]				[tab6]
Label		LDA #$00			;$xxxx

Mnemonics are always placed on 2nd tab position and on 6th tab position you can find the current address. It is provided for all labels in the GEOS KERNAL.
Any code placed on the 1st tab position (instead of 2nd) would mean that the purpose of current/called subroutine/memory location seems to be unknown.



FILE LIST AND DESCRIPTION

sources:
BOOTER.TAS	- code for setting up kernal and boooting OS
DEPACK.TAS	- depacker code for PACK64 (part of TASS package)
DRV1541.TAS	- source code for 1541 disk driver
GEOS.TAS	- main file - contains includes for all other source and include files
ICONS.TAS	- part of lower kernal, majority of ICONS used in DialogBoxes
JOYDRV.TAS	- source code for joystick input driver
KERNALx.TAS	- GEOS KERNAL source code
LOKERNAL.TAS	- lower kernal code

include files:
CONST.INC	- part of geosSym - constant values
DISKDRV.INC	- needs to be included if you are including disk driver from binary file
EQU.INC 	- some constants, may be edited
GEOSMAC.INC	- the same as geosMac
GEOSSYM.INC	- rest of geosSym - memory locations
INPUTDRV.INC	- needs to be included if you are including input driver from binary file
KERNAL.INC	- some memory locations not described in geosSym
PACKOPT.INC	- options for PACK64
PRINTDRV.INC	- not included, contains jumptab locations for printer drivers

binary files:
[THEY DO NOT START WITH LOAD ADDRESS!!! IT IS PLAIN DATA]
BSWFONT.BIN	- generic font
PATTERNS.BIN	- 32 gfx patterns
UNKNOWN.BIN	- seems to be the rest of the BSWFONT file
DRV1571.BIN	- binary disk driver for 1571
DRV1581.BIN	- binary disk driver for 1581
MSE1531.BIN	- binary input driver for 1531 mouse
KOALAPAD.BIN	- binary input driver for KoalaPad (anyone saw that?)
LIGHTPEN.BIN	- binary input driver for lightpen
PCANALOG.BIN	- binary input driver for analog joystick (from PC) connected as paddles



COMMENTS
Well, the sources are not commented very much but the routines labels are very descriptive. You should obtain the GEOS Programmer's Reference Book (by Alexander Boyce) for full description for all jumptab routines and many GEOS structures. This document
is widely available on the Net in plain text or HTML format.



AUTHOR
Reverse-enginer I should say ;).
Maciej Witkowiak
ytm@friko.onet.pl



END WORDS
Have fun!
