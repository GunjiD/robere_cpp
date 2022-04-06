#include "IntArray.h"
#include <iostream>

int main() {
  IntArray a(5);
  IntArray b(5);

  // a に値を入力していく
  for (int i = 0, size = a.Size(); i < size; ++i) {
    int n;
    std::cin >> n;
    a.Set(i, n);
  }

  // それを b にコピーして、各値を 2 倍する
  b = a;
  for (int i = 0, size = b.Size(); i < size; ++i) {
    b.Set(i, b.Get(i) * 2);
  }
  // a から  でどう値が変化したかを出力する
  for (int i = 0, size = a.Size(); i < size; ++i) {
    std::cout << a.Get(i) << " -> " << b.Get(i) << std::endl;
  }
}
