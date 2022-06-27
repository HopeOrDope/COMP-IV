
#include <iostream>
#include <vector>
using namespace std;

class FibLFSR {
	public:
		FibLFSR(string seed_input); //it is a constructor

		int step();

		int generate(int k_Times);

		friend std::ostream& operator<< (std::ostream& op, const FibLFSR& fibo);
	
	private:
		vector<int> Memo;
	
				
};


