CC=gcc
CFLAGS=-I

nestmultimake: nest_multi.c
	$(CC) -o nest_multi.o nest_multi.c
