#include "InputStream.h"
#include <iostream>
#include <ostream>

int main() {
  InputStream stream;
  std::cout << stream.Get() << std::endl;
}
