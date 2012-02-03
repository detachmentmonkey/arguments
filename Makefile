#
#	Arguments Makefile
#
 
CFILES   = src/arguments.c
HFILES   = src/arguments.h
CFLAGS   = -Wall -Wextra
TESTFILE = src/test/test.c
TESTEXE  = src/test/arguments_test

all: $(CFILES) $(HFILES) $(TESTFILE)
	gcc $(CFLAGS) $(CFILES) $(TESTFILE) -o $(TESTEXE)

run: all
	./$(TESTEXE)

