#include <iostream>
#include <ostream>

void Init(int array[]) {
  for (int i = 0; i < 5; ++i) {
    array[i] = i * 5;
  }
}

void Show(int array[]) {
  for (int i = 0; i < 5; ++i) {
    std::cout << array[i] << ' ';
  }
  std::cout << std::endl;
}

int main() {
  int n[5];

  Init(n);
  Show(n);
}
