#include <cstddef>
#include <iostream>
#include <ostream>

size_t Strlen(char *str) {
  char *p;
  for (p = str; *p != '\0'; ++p) {
  }
  return p - str;
}

void ShowLength(char *str) {
  std::cout << "文字列「" << str << "」の長さは " << Strlen(str)
            << "バイトです。" << std::endl;
}

int main() {
  ShowLength("Hello");
  ShowLength("");
}
