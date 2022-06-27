Compiler= g++
Flags= -Wall -Werror --std=c++14 -ansi -pedantic
lsfml_flags= -lsfml-graphics -lsfml-window -lsfml-system


all: NBody

NBody:	main.o CelestialBody.o Universe.o
	$(Compiler) main.o Universe.o CelestialBody.o -o NBody $(lsfml_flags)


main.o:	main.cpp CelestialBody.hpp Universe.hpp
	$(Compiler) -c main.cpp CelestialBody.hpp Universe.hpp $(Flags)

CelestialBody.o: CelestialBody.cpp CelestialBody.hpp
	$(Compiler) -c CelestialBody.cpp CelestialBody.hpp $(Flags)

Universe.o: Universe.cpp Universe.hpp
	$(Compiler) -c Universe.cpp Universe.hpp $(Flags)

clean:
	rm *.o
	rm *.gch
	rm NBody
