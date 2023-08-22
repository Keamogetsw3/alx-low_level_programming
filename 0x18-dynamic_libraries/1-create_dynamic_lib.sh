#!/bin/bash
gcc -c -Wall -Werror -fpic *.c
gcc -shared -o liball.so *.o
rm -f *.o

git add .
git commit -m 'Dynamic library liball.so has been created'
git push
