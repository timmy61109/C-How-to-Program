#include <iostream>
#include <string.h>
#include "prog3.h"


int main() {
  Score str1("國立金門技術學院", "電一甲");
  std::cout << "\n第一位學生....";
  str1.show();
  Score str2("國立金門技術學院", "電一甲",78,87 ,98);
  std::cout << "\n\n第二位學生....";
  str2.show();
  std::cout << "\n";
  return 0;
}
