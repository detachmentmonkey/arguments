#
#	Arguments Makefile
#
 
CFLAGS   = -Wall -Wextra
TESTFILE = test/main.c
TESTEXE  = test/arguments_test

all: src/arguments.c src/arguments.h src/test/main.c
	gcc $(CFLAGS) src/arguments.c src/test/main.c -o src/test/arguments_test

run: all
	./src/test/arguments_test

