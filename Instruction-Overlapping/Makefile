# Define the source files and object files
SRC_FILES = nop.c nop.asm
OBJ_FILES = nop.o

# Define the compiler and flags
CC = gcc
NASM = nasm
CFLAGS = -O0
NASMFLAGS = -f elf64

# Define the targets and dependencies
all: nop

nop.o: nop.asm
	$(NASM) $(NASMFLAGS) -o $@ $<

nop: nop.c nop.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f nop $(OBJ_FILES)

.PHONY: all clean