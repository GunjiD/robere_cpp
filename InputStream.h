#ifndef INPUTSTREAM_H_
#define INPUTSTREAM_H_

// 入力クラス
#include "Stream.h"

class InputStream : public Stream {
public:
  InputStream(double n);

protected:
  virtual void SetBase(); //値を設定する基本関数
};

#endif
