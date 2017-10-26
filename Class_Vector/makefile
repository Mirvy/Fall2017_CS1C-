CC=g++ -std=c++14
FLAGS= -Wall

all: vector


gdb:
	make FLAGS=-g

vector: vector.cpp vector.h
	$(CC) $(FLAGS) $< -o $@

clean:
	rm vector *.o
