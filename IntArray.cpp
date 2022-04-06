#include "IntArray.h"
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <ostream>

IntArray::IntArray(const IntArray &other) {
  m_array = new int[other.m_size];
  m_size = other.m_size;

  // copy はメモリの内容をコピーする関数のようなものです
  std::copy(other.m_array, other.m_array + other.m_size, m_array);

  std::cout << "コピーコンストラクタが呼ばれました。" << std::endl;
}

IntArray::IntArray(int size) {
  m_array = new int[size];
  m_size = size;

  std::cout << "コンストラクタが呼ばれました。"
            << "要素数は " << m_size << " です。" << std::endl;
}

// デストラクタ
IntArray::~IntArray() {
  delete[] m_array;

  std::cout << "デストラクタが呼ばれました。"
            << "要素数は " << m_size << " でした。" << std::endl;
}

int IntArray::Get(int i) {
  ChechkIndex(i);
  return m_array[i];
}

void IntArray::Set(int i, int value) {
  ChechkIndex(i);
  m_array[i] = value;
}

// インデックスのチェック
void IntArray::ChechkIndex(int i) {
  if (0 <= i && i < INTARRAY_SIZE) {
    // インデックスは正常です
  } else {
    std::cout << "インデックスが不正です" << std::endl
              << "値 ： " << i << std::endl;
    std::exit(EXIT_FAILURE);
  }
}

int IntArray::Size() { return m_size; }
