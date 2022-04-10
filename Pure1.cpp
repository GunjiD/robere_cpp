#include "InputStream.h"
#include <iostream>
#include <ostream>

int main() {
  InputStream istream;

  std::cout << "> " << std::endl;
  istream.Set();
  std::cout << istream.Get() << std::endl;
}
