CC= gcc
CFLAGS=
LIB=

all:srcfile

headerfile:
	$(CC) $(CFLAGS) -c headerfile.c

srcfile:headerfile
	$(CC) $(CFLAGS) headerfile.o srcfile.c -c srcfile

run:
	.\srcfile.exe