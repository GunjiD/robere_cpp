#include <iostream>
#include <ostream>

int main() {
  int a;
  int *p = &a;

  a = 0;
  std::cout << " a = " << a << std::endl << "*p = " << *p << std::endl;

  *p = 5;
  std::cout << " a = " << a << std::endl << "*p = " << *p << std::endl;
}
