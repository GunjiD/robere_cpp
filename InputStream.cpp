#include "InputStream.h"
#include <iostream>

// 入力された値を取得
double InputStream::Get() const { return m_n; }

// 入力関数
bool InputStream::Set() {
  std::cin >> m_n;
  return m_n >= 0;
}
