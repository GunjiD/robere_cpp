#include "Stream.h"
#include <iostream>

// 設定された値を取得
double Stream::Get() const { return m_n; }

// 値を設定
bool Stream::Set() {
  SetBase();
  return m_n >= 0;
}

// 値を設定する基本関数
void Stream::SetBase() {
  std::cout << "Stream::SetBase" << std::endl;
  m_n = -1;
}
