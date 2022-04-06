#include <iostream>
#include <ostream>

class Integer {
public:
  int m_value;

  Integer();
  Integer(int num);
  void Show();
};

Integer::Integer() { m_value = 0; }
Integer::Integer(int num) { m_value = num; }

void Integer::Show() { std::cout << m_value << std::endl; }

int main() {
  Integer a;
  Integer b(100);
  Integer c(40);

  a.Show();
  b.Show();
  c.Show();
}
