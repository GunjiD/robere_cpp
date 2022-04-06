#include "IntArray.h"
#include <iostream>
#include <ostream>

void Show(IntArray array) {
  for (int i = 0; i < array.Size(); ++i) {
    std::cout << array.Get(i) << ' ';
  }
  std::cout << std::endl;
}

int main() {
  IntArray array0to9(10);

  for (int i = 0; i < array0to9.Size(); ++i) {
    array0to9.Set(i, i);
  }
}
