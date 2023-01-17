
# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

contains-duplicate: contains-duplicate.o
	$(CC) $(CFLAGS) -o contains-duplicate contains-duplicate.o

contains-duplicate.o: contains-duplicate.cpp
	$(CC) $(CFLAGS) -c contains-duplicate.cpp

clean:
	rm -rf contains-duplicate contains-duplicate.o
