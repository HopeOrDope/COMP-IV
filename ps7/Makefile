# Copyright 2022 Aniketh Rai
CC = g++ 
CFLAGS = -std=c++17 -Wall -Werror -pedantic
LFLAGS = -lboost_regex -lboost_date_time

all: ps7 lint
lint:
	cpplint --filter=-runtime/references,-build/c++11 --root=. *.cpp

ps7: main.o
	$(CC) -o $@ main.o $(LFLAGS)

main.o: main.cpp 
	$(CC) $(CFLAGS) -c main.cpp -o main.o

clean:
	rm -f ps7 *.o