CC=gcc
CFLAGS=-c -std=c99 
OUTPUT=myLs

all: myLs.h myLs.c
	$(CC) myLs.h myLs.c -o $(OUTPUT)


