#include "Stream.h"
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
