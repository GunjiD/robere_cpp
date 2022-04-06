#ifndef INTARRAY_H_INCLUDED_
#define INTARRAY_H_INCLUDED_

#include <cstdlib>
#include <iostream>
#include <ostream>

const int INTARRAY_SIZE = 100;

class IntArray {
public:
  // コンストラクタ
  IntArray(const IntArray &other);
  IntArray(int size);
  ~IntArray();

public:
  // メンバへのアクセス関数
  int Get(int i);
  void Set(int i, int value);
  int Size();

private:
  // インデックスのチェック
  void ChechkIndex(int i);

private:
  int *m_array; // 動的配列
  int m_size;   // 配列の要素数
};
#endif
