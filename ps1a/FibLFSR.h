// Copyright 2022 Aniketh Rai
#ifndef FIBLFSR_H_
#define FIBLFSR_H_
#include <iostream>
#include <string>
class FibLFSR {
 public:
FibLFSR(std::string seed);
int step();
int generate(int k);
friend std::ostream& operator<<
(std::ostream& out, const FibLFSR& fibLFSR);
 private:
std::string rgs; // NOLINT
int funGetBit(char a);
int funXOR(int a, int b);
};
#endif  // FIBLFSR_H_
