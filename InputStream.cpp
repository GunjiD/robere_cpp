#include "InputStream.h"
#include <iostream>
#include <ostream>

InputStream::InputStream(double n) : Stream() {}

// 入力関数
void InputStream::SetBase() { std::cin >> m_n; }
