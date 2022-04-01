#include <cstddef>
#include <iostream>
#include <ostream>

void ShowAddresses(char *pointer) {
  std::cout << "pointer   : " << (size_t)pointer << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cout << "&pointer[" << i << "] : " << (size_t)&pointer[i] << std::endl;
  }
}

int main() {
  char array[10];

  std::cout << "array    : " << (size_t)array << std::endl;
  for (int i = 0; i < 10; ++i) {
    std::cout << "&aaray[" << i << "]" << (size_t)&array[i] << std::endl;
  }
  std::cout << std::endl;

  ShowAddresses(array);
}
