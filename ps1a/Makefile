#Copyright 2022 Aniketh Rai
boost = boost_unit_test_framework
all: ps1a lint
lint:
	cpplint --filter=-runtime/references,-build/c++11 --root=. *.h *.cpp
ps1a: FibLFSR.o test.o
	g++ FibLFSR.o test.o -o ps1a -l $(boost)

FibLSFR.o: FibLSFR.cpp FibLSFR.h
	gcc -c FibLSFR.cpp

test.o: FibLFSR.h FibLFSR.cpp test.cpp
	g++ -c FibLFSR.cpp test.cpp -l $(boost)

clean:
	rm *.o
	rm ps1a