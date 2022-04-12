#include "ArrayStream.h"
#include "InputStream.h"
#include <iostream>
#include <ostream>

// 入力に応じて Stream クラスの派生クラスを作って返す関数
Stream *CreateStream() {
  char ch;

  while (true) {
    std::cout << "i: InputStream, a: ArrayStream > " << std::flush;
    std::cin >> ch;

    switch (ch) {
    case 'i':
      // 'i' なら InputStream クラスを作って返す
      return new InputStream(-1);
    case 'a':
      while (true) {
        std::cout << "配列を選んでください (1, 2) > " << std::flush;
        std::cin >> ch;
        if (ch == '1') {
          static const double ARRAY[] = {1, 2, 3, -1};
          static const int SIZE = sizeof ARRAY / sizeof *ARRAY;
          return new ArrayStream(ARRAY, SIZE);
        } else if (ch == '2') {
          static const double ARRAY[] = {0.5, 1.5, -1};
          static const int SIZE = sizeof ARRAY / sizeof *ARRAY;
          return new ArrayStream(ARRAY, SIZE);
        }
      } // while(true)
    }   // switch(ch)
  }     // while(true)
}

// stream から得られる値の合計を表す関数
double Sum(Stream &stream) {
  double sum = 0;
  while (stream.Set()) {
    sum += stream.Get();
  }
  return sum;
}

int main() {
  for (int i = 0; i < 3; ++i) {
    Stream *stream = CreateStream();
    double sum = Sum(*stream);
    std::cout << "合計: " << sum << std::endl;
    delete stream;
  }
}
