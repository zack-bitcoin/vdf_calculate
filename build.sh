
gcc -O3 -c sha256.c
gcc -O3 -c vdf_calculate.c
gcc sha256.o vdf_calculate.o -o vdf_calculate
rm *.o
