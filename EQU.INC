
;GEOS System various equations
;by Maciej 'YTM/Alliance' Witkowiak
;19-3-99, 4.6.99

;select the driver for the boot drive from the list:
;(only one value may be 'true')
use1541 		= false
use1571 		= true
use1581 		= false

;select generic input driver from the list:
;(only one value may be 'true')
useJoystick		= true
use1531 		= false
useKoalaPad		= false
useLightPen		= false
usePCAnalogJoy		= false

;Feel (almost) free to change equation values below:

currentYear		= 99		;88
currentMonth		= 3		;7
currentDay		= 20		;6

currentInterleave	= 8		;8
SelectFlashDelay	= 10		;10 in 1/50 s
SerialNumber		= $1cd5 	;$1cd5

menuVSeparator		= %10101010	;%10101010
menuHSeparator		= %01010101	;%01010101

backPattern1		= %01010101	;%01010101 ;overriden by DeskTop
backPattern2		= %10101010	;%10101010

REUOsVarBackup =    $7900     ;base for OS_VARS_LGH bytes for reboot
REUDskDrvSPC   =    $8300     ;base for 4*DISK_DRV_LGH disk drivers in REU