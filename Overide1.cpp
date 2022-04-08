#include "InputStream.h"
#include "Stream.h"
#include <iostream>
#include <ostream>

int main() {
  InputStream istream;

  std::cout << "> " << std::endl;
  istream.Set();
  std::cout << istream.Get() << std::endl;

  Stream stream;

  stream.Set();
  std::cout << stream.Get() << std::endl;
}
