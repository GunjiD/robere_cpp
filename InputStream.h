#ifndef INPUTSTREAM_H_
#define INPUTSTREAM_H_

// 入力クラス
class InputStream {
public:
  double Get() const; // 入力された値を取得
  bool Set();         // 入力関数
private:
  double m_n; // 入力された値
};

#endif
