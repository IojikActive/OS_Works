CC=gcc
CFLAGS=-std=c99 
OUTPUT=myLs.out

all: myLs.h myLs.c
	$(CC) myLs.h myLs.c -o $(OUTPUT)

debug: myLs.h myLs.c
	$(CC) myLs.h myLs.c -o $(OUTPUT)
	./myLs.out .
	


