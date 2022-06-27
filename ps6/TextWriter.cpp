// Copyright 2022 Aniketh Rai
#include <string>
#include "RandWriter.h"
int main(int argc, const char *argv[]) {
  if (argc != 3) {
    throw "bad Input. Usage: ./TextWriter (int k) (int T) < input.txt";
    return 0;
  }
std::string str_k(argv[1]);
std::string str_t(argv[2]);

int k = std::stoi(str_k);
int l = std::stoi(str_t);

std::string input = ""; // NOLINT
std::string output = ""; // NOLINT

int i = 0, len = 0;

while (std::getline(std::cin, input) && i < l) {
    if (input.length() > static_cast<unsigned int>(k)) {
        try {
            RandWriter writer(input, k);
            if (static_cast<int>(input.length()) > l) {
                    len = l;
            } else if (static_cast<int>(input.length()) + i > l) {
                    len = l - i;
            } else {
                    len = input.length();
                }
            output = writer.generate(input.substr(0, k), len);
            i += output.length();
            std::cout << output << std::endl;
            }
        catch (std::invalid_argument& err) {
                std::cerr << err.what() << std::endl;
                exit(-1);
            }
        catch (std::runtime_error& err) {
                std::cerr << err.what() << std::endl;
                exit(-1);
            }
        }
    }

    return 0;
}
