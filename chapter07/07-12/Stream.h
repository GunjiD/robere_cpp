#ifndef STREAM_H_
#define STREAM_H_

#include <iostream>

// 0 以上の値を順次取得していく処理を行うための基底クラス
class Stream {
public:
  virtual ~Stream();
  Stream();
  double Get() const;
  bool Set(); // 値をセット
protected:
  virtual void SetBase() = 0; // 値を設定する基本関数
  double m_n;
};

#endif
