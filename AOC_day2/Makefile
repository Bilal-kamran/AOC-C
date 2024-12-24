CC = gcc
CFLAGS = -Wall -Wextra -Werror -ggdb -std=c11

program: main.o input.o
	$(CC) $(CFLAGS) -o program main.o input.o

main.o: main.c input.h
	$(CC) $(CFLAGS) -c main.c

input.o: input.c input.h
	$(CC) $(CFLAGS) -c input.c

.PHONY: clean
clean:
	rm -f *.o program
