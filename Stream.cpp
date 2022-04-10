#include "Stream.h"
#include "HalfInputStream.h"
#include <iostream>
#include <iterator>

Stream::Stream() : m_n(-1) {}

// 設定された値を取得
double Stream::Get() const { return m_n; }

// 値を設定
bool Stream::Set() {
  SetBase();
  return m_n >= 0;
}

// 値を設定する基本関数
void HalfInputStream::SetBase() {
  InputStream::SetBase();
  m_n /= 2;
}
