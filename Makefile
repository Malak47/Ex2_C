CC = gcc
AR = ar
FLAGS = -Wall -g

all: my_mat.so connections

my_mat.so: my_mat.o
	$(CC) -shared -o my_mat.so my_mat.o

my_mat.o: my_mat.h my_mat.c
	$(CC) $(FLAGS) -c my_mat.c

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

connections: main.o my_mat.so
	$(CC) $(FLAGS) -o connections main.o ./my_mat.so

.PHONY: clean all

clean:
	-del -fR *.o *.so connections
