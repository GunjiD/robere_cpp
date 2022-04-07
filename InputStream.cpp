#include "InputStream.h"
#include <iostream>

// 入力関数
bool InputStream::Set() {
  std::cin >> m_n;
  return m_n >= 0;
}
