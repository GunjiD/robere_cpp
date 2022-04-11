#include "ArrayStream.h"
#include <algorithm>
#include <iostream>
#include <ostream>

ArrayStream::ArrayStream(const double *array, int size) {
  m_array = new double[size];
  std::copy(array, array + size, m_array);
  m_i = 0;
}

ArrayStream::~ArrayStream() {
  std::cout << "~ArrayStream" << std::endl;
  delete[] m_array;
}

// 新しい値を設定
void ArrayStream::SetBase() {
  m_n = m_array[m_i];
  if (m_n >= 0) {
    ++m_i;
  }
}
