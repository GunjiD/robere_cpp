#include "InputStream.h"
#include <algorithm>
#include <iostream>
#include <ostream>

bool Average(InputStream &stream) {
  int count;
  double avr = 0;

  for (count = 0; stream.Set(); ++count) {
    avr += stream.Get();
  }
  if (count == 0) {
    return false;
  }

  avr /= count;
  std::cout << "平均値は "
            << " です。" << std::endl;

  return true;
}

int main() {
  while (true) {
    InputStream stream;
    if (!Average(stream)) {
      break;
    }
  }
}
