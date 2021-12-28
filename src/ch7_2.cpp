#include <iostream>
#include "ch7_2.h"


int main() {
  Student stu1("陳彥良","801012", 98,89,79,99,96);
  Student stu2("余河天","801014", 90,91,87,92,97);
  cout <<"\n登錄後的學生資料顯示.....";
  cout <<"\n\n第一位學生.....";
  stu1.showdata();
  cout <<"\n\n第二位學生.....";
  stu2.showdata();
  cout<<"\n";
  system("pause");
  return 0;
}
