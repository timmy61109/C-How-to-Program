#include <iostream>


class Base {
  friend void show(Base &);
  protected:
  	int x;
  public:
  	Base(int s) {
      x = s;
    }
  	Base() {}
};


class Devired:public Base {
  friend void show(Devired &);
  protected:
  	int y;
  public:
  	Devired(int s) {
      y=s;
    }
  	Devired() {}
};

void show(Base &s) {
  std::cout << "\n基礎類別--->" << s.x;
}

void show(Devired &s) {
  std::cout << "\n衍生類別--->" << s.y;
}

int main() {
  Base a(1);
  show(a);
  Devired b(2);
  show(b);
  std::cout << "\n";
  return 0;
}
