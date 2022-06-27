Compiler = g++
flags = -Wall -Werror -std=c++14 -pedantic

all: ps1_partone PhotoMagic

PhotoMagic: PhotoMagic.o FibLFSR.o
	$(Compiler) $(flags) -o PhotoMagic PhotoMagic.o FibLFSR.o -lsfml-graphics -lsfml-window -lsfml-system

ps1_partone: test.o FibLFSR.o
	$(Compiler) $(flags) -o ps1a test.o FibLFSR.o -lboost_unit_test_framework	

photomagic.o: PhotoMagic.cpp PhotoMagic.h
	$(Compiler) $(flags) -c PhotoMagic.cpp

test.o: test.cpp FibLFSR.hpp
	$(Compiler) $(flags) -c test.cpp

FibLFSR.o: FibLFSR.cpp FibLFSR.hpp 
	$(Compiler) $(flags) -c FibLFSR.cpp

clean:
	rm -f *.o ps1_partone PhotoMagic
