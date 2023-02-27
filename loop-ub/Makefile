.PHONY: clean, mrproper
CC = clang++
CPPFLAGS = -Wall -std=c++20 -O1

all: loop

loop:
	$(CC) $(CPPFLAGS) loop.cpp -o $@

clean:
	rm -f loop
