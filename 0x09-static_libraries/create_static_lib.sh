#!/bin/bash
ar -rc liball.a *.o
for file in *.c; do
	gcc -c "$file"
	ar -rc libmy.a "${file%.c}.o"
done
