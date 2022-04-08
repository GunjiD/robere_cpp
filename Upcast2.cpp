#include "ArrayStream.h"
#include "InputStream.h"
#include "Stream.h"
#include <iostream>
#include <ostream>

void Show(const Stream &stream) { std::cout << stream.Get() << std::endl; }

int main() {
  InputStream istream;

  std::cout << "> " << std::endl;
  istream.Set();
  Show(istream);

  static const double ARRAY[] = {3, -1};
  ArrayStream astream(ARRAY);

  astream.Set();
  Show(astream);
}
