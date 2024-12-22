CC = gcc
CFLAGS = -Wall -Wextra -Werror -ggdb -std=c11

program: main.o input1.o input2.o Bubblesort.o
	$(CC) $(CFLAGS) -o program main.o input1.o input2.o Bubblesort.o

main.o: main.c input1.h input2.h
	$(CC) $(CFLAGS) -c main.c

input1.o: input1.c input1.h
	$(CC) $(CFLAGS) -c input1.c

input2.o: input2.c input2.h
	$(CC) $(CFLAGS) -c input2.c

Bubblesort.o: Bubblesort.c Bubblesort.h
	$(CC) $(CFLAGS) -c Bubblesort.c

.PHONY: clean
clean:
	rm -f *.o program
