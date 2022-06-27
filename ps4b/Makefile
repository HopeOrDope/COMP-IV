compiler= g++
flags= -g -std=c++11
SFMLFlags= -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

all:	lint KSGuitarSim main.o 

lint:
	cpplint --filter=-runtime/references,-build/c++11 --root=. *.h *.cpp

KSGuitarSim: CircularBuffer.h StringSound.o KSGuitarSim.o 
	$(compiler) KSGuitarSim.o CircularBuffer.h StringSound.o -o KSGuitarSim $(SFMLFlags)

KSGuitarSim.o: KSGuitarSim.cpp
	$(compiler) -c KSGuitarSim.cpp $(flags)

StringSound.o: StringSound.h StringSound.cpp
	$(compiler) -c StringSound.h StringSound.cpp $(flags)

test.o: test.cpp CircularBuffer.h
	$(compiler) -c test.cpp CircularBuffer.h $(flags)

main.o: CircularBuffer.h main.cpp
	$(compiler) $(flags) -o a CircularBuffer.h main.cpp

clean:
	rm *.o
	rm *.gch
	rm KSGuitarSim
	rm a
