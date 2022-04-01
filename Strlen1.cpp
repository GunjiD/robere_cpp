#include <cstddef>
#include <iostream>
#include <iterator>

size_t StrLen(char *str) {
  size_t i;
  for (i = 0; str[i] != '\0'; ++i) {
  }
  return i;
}

void ShowLength(char *str) {
  std::cout << "文字列「" << str << "」の長さは " << StrLen(str)
            << " バイトです。" << std::endl;
}

int main() {
  ShowLength("Hello");
  ShowLength("");
}
