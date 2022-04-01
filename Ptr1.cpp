#include <iostream>
#include <iterator>

int main() {
  char a;
  char *p;

  p = &a;

  std::cout << " p = " << (size_t)p << std::endl
            << "&a = " << (size_t)&a << std::endl;
}
