#include <cstdlib>
#include <iostream>
#include <ostream>

const int INTARRAY_SIZE = 100;

class IntArray {
public:
  // コンストラクタ
  IntArray(int size);
  ~IntArray();

public:
  // メンバへのアクセス関数
  int Get(int i);
  void Set(int i, int value);

private:
  // インデックスのチェック
  void ChechkIndex(int i);

private:
  int *m_array; // 動的配列
  int m_size;   // 配列の要素数
};

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

void Viss(int num) { std::cout << "Viss : No." << num << std::endl; }

IntArray a(10);

int main() {
  Viss(1);

  IntArray b(20);
  Viss(2);

  IntArray(30);
  Viss(3);
  {
    IntArray(40);
    Viss(4);
  }
  Viss(5);
}
