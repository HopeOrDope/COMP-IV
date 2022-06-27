#include "FibLFSR.hpp"
#include <string>
#include <vector>
using namespace std;

FibLFSR::FibLFSR(string seed_input) {
	for(unsigned long int i = 0; i < seed_input.length(); i++) {
		Memo.push_back((int)(seed_input.at(i)-48));
	}
}

int FibLFSR::step() {
	
	int last;
	int first = Memo[0];
	int _pos13 = Memo[2];
	int _pos12 = Memo[3];
	int _pos10 = Memo[5];

	last = first ^ _pos13 ^ _pos12 ^ _pos10;

	Memo.erase(Memo.begin());
	Memo.push_back(last);

	return last;
}

int FibLFSR::generate(int k_Times) {
	int Taking_value = 0;

	for(k_Times = k_Times; k_Times > 0; k_Times--) {
		Taking_value = (2 * Taking_value) + step();
	}

	return Taking_value;
}

std::ostream& operator<< (ostream& op, const FibLFSR& fibo){
	for(auto eestart = fibo.Memo.begin(); eestart != fibo.Memo.end(); eestart++) {
		op << *eestart;
	}
	
	return op;
}