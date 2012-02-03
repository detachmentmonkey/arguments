#
#	Arguments
#
 
CFLAGS   = -Wall -Wextra
TESTFILE = test/main.c
TESTEXE  = test/arguments_test

all: arguments.c arguments.h test/main.c
	gcc $(CFLAGS) arguments.c test/main.c -o test/arguments_test

run: all
	./test/arguments_test

