#include "InputStream.h"
#include "Stream.h"
#include <iostream>
#include <ostream>

InputStream::InputStream(double n) : Stream(n) {
  std::cout << "InputStream" << std::endl;
}

// 入力関数
void InputStream::SetBase() { std::cin >> m_n; }
