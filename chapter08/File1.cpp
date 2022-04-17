#include <cstdlib>
#include <fstream>
#include <ios>
#include <iostream>
#include <ostream>

int main() {
  std::fstream file;

  file.open("test.txt", std::ios::out);
  if (!file.is_open()) {
    return EXIT_FAILURE;
  }

  file << "ファイルに書き込んじゃえ" << std::endl;
  file.close();
}
