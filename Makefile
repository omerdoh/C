CC = gcc
CC_FLAGS = -g -ansi -pedantic -Wall -w -lm
OUT_EXE = "assignment1"
FILES = PartA.c Menu_Options.c check_validity.c

PART_A: $(FILES)
	$(CC) $(CC_FLAGS) -o $(OUT_EXE) $(FILES)


