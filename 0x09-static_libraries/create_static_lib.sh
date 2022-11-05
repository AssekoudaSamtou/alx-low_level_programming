#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -rc liball.a *.o
#ranlib liball.a
#gcc -std=gnu89 main.c -L. -lmy -o quote
#./quote
