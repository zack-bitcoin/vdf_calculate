@echo off

cl -c sha256.c
cl -c vdf_calculate.c
cl sha256.obj vdf_calculate.obj -o vdf_calculate
rm *.obj

