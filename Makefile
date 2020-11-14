CC = gcc
CC_FLAGS = -g -ansi -pedantic -Wall -w -lm
OUT_EXE = "assignment1"
FILES = PartA.c Menu_Options.c check_validity.c

PART_A: $(FILES)
	$(CC) $(CC_FLAGS) -o $(OUT_EXE) $(FILES)

PartA.o : check_validity.h Menu_Options.h
Menu_Options.c : PhEntry.c Area.c

