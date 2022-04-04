#include <iostream>
#include <ostream>

const int MAX_NAME = 16;

struct Student {
  char name[MAX_NAME + 1];
  int ScoreJapanese;
  int ScoreMath;
  int ScoreEnglish;
};

void Show(const Student *pointer) {
  std::cout << "名前 : " << pointer->name << std::endl
            << "  国語 : " << pointer->ScoreJapanese << " 点"
            << ", 数学 : " << pointer->ScoreMath << " 点"
            << ", 英語 : " << pointer->ScoreEnglish << " 点" << std::endl;
}

int main() {
  Student student[] = {
      {
          "赤井孝",
          73,
          98,
          86,
      },
      {
          "笠井大介",
          64,
          45,
          40,
      },
      {
          "吉田叶",
          76,
          78,
          69,
      },
  };

  int size = sizeof student / sizeof *student;

  for (int i = 0; i < size; ++i) {
    Show(&student[i]);
  }
}
