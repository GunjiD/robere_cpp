#include "InputStream.h"
#include "Stream.h"
#include <iostream>
#include <iterator>
#include <ostream>

int main() {
  InputStream stream;
  std::cout << "> " << std::flush;
  stream.Set();

  const Stream &ref = stream;
  std::cout << ref.Get() << std::endl;
}
