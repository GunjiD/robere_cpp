#include "HalfInputStream.h"
#include "InputStream.h"
#include <iostream>

// 値を設定する基本関数
void HalfInputStream::SetBase() {
  InputStream::SetBase();
  m_n /= 2;
}
