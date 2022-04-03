#include <cstdio>
#include <iostream>

int main() {
  const int KUKU_SIZE = 9;
  int kuku[KUKU_SIZE][KUKU_SIZE];

  for (int i = 1; i <= KUKU_SIZE; ++i) {
    for (int j = 1; j <= KUKU_SIZE; ++j) {
      kuku[i - 1][j - 1] = i * j;
    }
  }

  std::cout << "    1  2  3  4  5  6  7  8  9" << std::endl;
  for (int i = 1; i <= KUKU_SIZE; ++i) {
    std::printf(" %d ", i);
    for (int j = 1; j <= KUKU_SIZE; ++j) {
      std::printf("%2d ", kuku[i - 1][j - 1]);
    }
    std::cout << std::endl;
  }
}
