compiler = g++
flags_c = -g -Wall -Werror -std=c++0x -pedantic
flags_S = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
lboost = -lboost_unit_test_framework

all:	TextWriter test lint

lint:
	 cpplint --filter=-runtime/references,-build/c++14 --root=. *.h *.cpp

TextWriter:	TextWriter.o RandWriter.o
	$(compiler) TextWriter.o RandWriter.o -o TextWriter

test:	test.o RandWriter.o
	$(compiler) test.o RandWriter.o -o test $(lboost)

TextWriter.o:TextWriter.cpp RandWriter.h
	$(compiler) -c TextWriter.cpp RandWriter.h $(flags_c)

RandWriter.o:RandWriter.cpp RandWriter.h
	$(compiler) -c RandWriter.cpp  RandWriter.h $(flags_c)

test.o:test.cpp
	$(compiler) -c test.cpp $(lboost)

clean:
	rm *.o
	rm *.gch
	rm TextWriter
	rm test