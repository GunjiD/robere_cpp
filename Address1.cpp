#include <bits/c++config.h>
#include <cstddef>
#include <iostream>
#include <ostream>

void Foo() {
  int a;
  char b[10];
  std::cout << "a    : " << (size_t)&a << std::endl
            << "b    : " << (size_t)&b << std::endl
            << "Foo  : " << (size_t)&Foo << std::endl;
}

int main() { Foo(); }
