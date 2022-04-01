#include <cstddef>
#include <iostream>
#include <iterator>
#include <ostream>

int main() {
  char array[10];

  std::cout << "array      : " << (size_t)array << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cout << "&array[" << i << "] : " << (size_t)&array[i] << std::endl;
  }
}
