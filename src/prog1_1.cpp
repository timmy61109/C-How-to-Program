#include "prog1.h"
#include <iostream>
#include <string.h>

void Student::get() {
  std::cout << "輸入姓名:";
  std::cin >> name;
  std::cout << "中文成績:";
  std::cin >> Chinese;
  std::cout << "數學成績:";
  std::cin >> Math;
  std::cout << "英文成績:";
  std::cin >> English;
}
