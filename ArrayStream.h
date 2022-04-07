#ifndef ARRAYSTREAM_H_
#define ARRAYSTREAM_H_

#include "Stream.h"

// 配列から順に値を取得していくクラス
class ArrayStream : public Stream {
public:
  ArrayStream(const double *array);
  bool Set(); // 新しい値を設定

private:
  const double *m_array; // 配列
  int m_i;               // 現在のインデックス
};

#endif
