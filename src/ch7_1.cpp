#include <iostream>
#include "ch7_1.h"


int main() {
  Student stu1("陳彥良","801012", 98,89,79,99,96);
  Student stu2("余河天","801014", 90,91,87,92,97);
  std::cout <<"\n登錄後的學生資料顯示.....";
  std::cout <<"\n\n第一位學生.....";
  stu1.showdata();
  std::cout <<"\n\n第二位學生.....";
  stu2.showdata();
  std::cout<<"\n";
  system("pause");
  return 0;
}
