// Copyright 2022 Aniketh Rai
#include <iostream>
#include <fstream>
#include <string>
#include <boost/date_time/posix_time/ptime.hpp>
#include <boost/date_time/posix_time/time_parsers.hpp>
#include "boost/date_time/posix_time/posix_time.hpp"
#include <boost/regex.hpp>
using boost::posix_time::time_duration;
int main(int argc, char *argv[]) {
int n = 1;

std::string s, _inputfile; // NOLINT
boost::regex startMessage("( \\(log.c.166\\) server started)");
boost::regex endMessage(
    "(oejs.AbstractConnector:Started SelectChannelConnector)");
_inputfile = argv[1];

std::ifstream myFile(_inputfile);
std::ofstream output_file;
std::string _ofilename = _inputfile + ".rpt"; // NOLINT

bool stillBooting = false;
boost::posix_time::ptime start_time, end_time;
if (!myFile) {
std::cout << "file cannot be opened\n";
exit(-1);
}
output_file.open(_ofilename);
if (!output_file.is_open()) {
std::string oerror = "Creation of file " + _ofilename + " not possible"; // NOLINT
exit(1);
}
auto getTime = [](std::string time_str) {
return time_str.substr(0, 19);};
if (output_file.is_open()) {
        output_file << "The Device Boot Report\n";
        output_file << "InTouch log file: " << argv[1] << "\n\n";}
while (getline(myFile, s)) {
if (regex_search(s, startMessage)) {
    start_time = boost::posix_time::time_from_string(getTime(s));
    if (stillBooting) {
        output_file << "~~~~ Incomplete Booting ~~~~ \n\n";
        stillBooting = false;
        }
    stillBooting = true;
    output_file << "***** Device Boot *****\n";
    output_file << n << "(" << argv[1] << "): "
            << start_time << " Boot Start\n";
} else if (regex_search(s, endMessage)) {
    stillBooting = false;
    end_time = boost::posix_time::time_from_string(getTime(s));
    time_duration duration = end_time - start_time;
    output_file << n << "(" << argv[1] << "): "
                << end_time << " Boot Completed\n\tBoot Time: "
                << duration.total_milliseconds() << "ms\n\n";
    }
n++;}
if (stillBooting) {
    output_file << "!!!! Incomplete Booting !!!! \n\n";
}
return 0;
}
