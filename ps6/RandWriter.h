// Copyright 2022 Aniketh Rai
#ifndef RANDWRITER_H_
#define RANDWRITER_H_
#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <stdexcept>

class RandWriter {
 public:
  // constructor
  RandWriter(std::string text, int k);
  // API
  int order_k();
  int freq(std::string kgram);
  int freq(std::string kgram, char c);
  char k_Rand(std::string kgram);
  std::string generate(std::string kgram, int T);
  // overload <<
  friend std::ostream &operator<<(std::ostream &out, RandWriter &mm);
 private:
  int k;
  std::string text;
  std::map<std::string, std::map<char, int>> ktable;
  std::string alpha;
};
#endif  // RANDWRITER_H_
