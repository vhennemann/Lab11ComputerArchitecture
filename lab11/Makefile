.PHONY: all build fileIO strsep clean

CC = gcc
CFLAGS = -g -Wall -Wextra -Werror -pedantic -std=gnu99

all: build

build: fileIO_example.c strsep_example.c
	$(CC) $(CFLAGS) -o fileIO.o fileIO_example.c
	$(CC) $(CFLAGS) -o strsep.o strsep_example.c

fileIO: fileIO_example.c
	$(CC) $(CFLAGS) -o fileIO.o fileIO_example.c
	./fileIO.o

strsep: strsep_example.c
	$(CC) $(CFLAGS) -o strsep.o strsep_example.c
	./strsep.o

clean:
	rm -f *.o
	rm -f my_file.txt


