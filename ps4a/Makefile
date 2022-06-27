CC= g++
CPP_FLAGS= -Wall -Werror -pedantic --std=c++14 -g
lint: ps4a
	cpplint --filter=-runtime/references,-build/c++11 --root=. *.h *.cpp
all: ps4a main.o
ps4a: test.o 
	$(CC) test.o -o ps4a -lboost_unit_test_framework
test.o: test.cpp CircularBuffer.h
	$(CC) -c test.cpp CircularBuffer.h $(CPP_FLAGS)
main.o: main.cpp CircularBuffer.h
	$(CC) -o a main.cpp CircularBuffer.h  $(CPP_FLAGS)
clean:
	rm *.o
	rm *.gch
	rm ps4a
	rm a
