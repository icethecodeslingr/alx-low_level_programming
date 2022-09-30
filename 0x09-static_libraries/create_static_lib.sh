#!/bin/bash
gcc -wall -pedantic -Werror -Westra -c *.c
ar rc liball.a *.o
