// Copyright 2022 Aniketh Rai
#include "FibLFSR.h"
#include <math.h>
#include <string>
int FibLFSR::funGetBit(char a) {
if (a == '1') return 1;


else if (a == '0') return 0;


else
return -1;
}
std::ostream& operator<< (std::ostream& out, const FibLFSR& fibLFSR) {
    out << fibLFSR.rgs;
    return out;
}
FibLFSR::FibLFSR(std::string seed) {
    rgs = seed;
}
int FibLFSR::funXOR(int a, int b) {
    return a != b;
}
int FibLFSR::step() {
std::string _newRGS = rgs.substr(1); // NOLINT
int _TAPbitvalue = funXOR(rgs[0], rgs[2]);
_TAPbitvalue = funXOR(_TAPbitvalue, funGetBit(rgs[3]));
_TAPbitvalue = funXOR(_TAPbitvalue, funGetBit(rgs[5]));
FibLFSR::rgs = _newRGS;
FibLFSR::rgs += std::to_string(_TAPbitvalue);
return _TAPbitvalue;
}

int FibLFSR::generate(int k) {
int _result = 0;
for(int i = 0; i < k; i++) {
    int x = step();
    std::cout << rgs << " " << x << std::endl;
    _result = (_result * 2) + x;
}
return _result;
}
