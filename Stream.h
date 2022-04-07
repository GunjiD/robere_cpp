#ifndef STREAM_H_
#define STREAM_H_

#include <iostream>

// 0 以上の値を順次取得していく処理を行うための基底クラス

class Stream {
public:
  double Get() const;

protected:
  double m_n;
};

#endif
