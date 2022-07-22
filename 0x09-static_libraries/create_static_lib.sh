#!/bin/sh

gcc -c *.c

ar -rc liball.a *.c
