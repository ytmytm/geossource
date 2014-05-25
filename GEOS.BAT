cls
@echo *******************************************
@echo GEOS Generator with MMS' TASM & PACK64
@echo 19-3-99, by Maciej 'YTM/Alliance' Witkowiak
@echo *******************************************
@del geos.prg >nul:
@echo Assembling system...
@tass geos.tas >nul:
@echo *******************************************
@echo Packing file...
@pack64 geos.o64 <packopt.inc >nul:
@del geos.o64 >nul:
@ren geos.run geos.prg
@echo *******************************************
@echo GEOS.PRG is ready to use!
