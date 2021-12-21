#include <iostream>


class Base {
  protected:
    int x;
  public:
    // Constructor
	  Base(int b) {
      std::cout << "\n呼叫Constructor.....";
      std::cout << "\nExectiing the Base class constructor.";
      x=b;
    }
    // Destructor
		~Base() {
      std::cout << "\nExectiing the Base class destructor.";
		}
};

// 衍生類別
class Derived:public Base {
  private:
    int y;
  public:
    // Constructor
    Derived(int a,int b):Base(a) {
      std::cout << "\nExectiing the Derived class constructor.\n";
      y=b;
    }
    // Destructor
    ~Derived() {
      std::cout << "\n呼叫Destructor.....";
      std::cout << "\nExectiing the Derived class destructor.";
    }
};

int main() {
  Derived st1(1,2);
  std::cout << "\n";
  return 0;
}
