#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <ios>
#include <iostream>
#include <ostream>
#include <string>

int main() {
  std::fstream file;

  file.open("test.txt", std::ios::in);
  if (!file.is_open()) {
    return EXIT_FAILURE;
  }

  std::string str;
  std::getline(file, str);
  file.close();
  std::cout << str << std::endl;
}
