CC=gcc
CFLAGS=-std=c99 
OUTPUT=myLs

all: myLs.h myLs.c
	$(CC) myLs.h myLs.c -o $(OUTPUT)

debug: myLs.h myLs.c
	$(CC) myLs.h myLs.c -o $(OUTPUT)
	./myLs .
	


