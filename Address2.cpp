#include <cstddef>
#include <iostream>
#include <iterator>

int main() {
  int n[5];

  std::cout << "&n[2]     = " << (size_t)&n[2] << std::endl
            << "&n[2] + 1 = " << (size_t)(&n[2] + 1) << std::endl
            << "&n[3]     = " << (size_t)&n[3] << std::endl;
}
