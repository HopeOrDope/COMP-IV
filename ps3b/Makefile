Compiler=g++
LSFML=-lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system
FLAGS=-g -Wall -ansi -pedantic -std=c++14
Ofile=main.o Universe.o CelestialBody.o
lint: cpplint ps2b
all: $(Ofile)
	$(Compiler) $(FLAGS) -o NBody $(Ofile) $(LSFML)
 main.o: main.cpp
	$(Compiler) $(FLAGS) -c main.cpp
 Universe.o: Universe.cpp Universe.hpp
	$(Compiler) $(FLAGS) -c Universe.cpp
 CelestialBody.o: CelestialBody.cpp CelestialBody.hpp
	$(Compiler) $(FLAGS) -c CelestialBody.cpp
 clean:
	rm *.o
	rm NBody
