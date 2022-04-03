#include <iostream>
#include <ostream>

const int ARRAY_SIZE = 5;

void Init(int array[]) {
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    array[i] = i * 5;
  }
}

void Show(const int array[]) {
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    std::cout << array[i] << ' ';
  }
  std::cout << std::endl;
}

int main() {
  int n[ARRAY_SIZE];

  Init(n);
  Show(n);
}
