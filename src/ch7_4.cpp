#include <iostream>
#include "ch7_4.h"


int main() {
  student_t student_1 = {
    98,
    89,
    79,
    99,
    96,
    0,
    0,
    0,
    0,
    "陳彥良",
    "801012",
    "電子科",
    "asdf@gmail.com",
  };
  student_t student_2 = {
    98,
    77,
    69,
    0,
    0,
    66,
    80,
    0,
    0,
    "余河天",
    "801013",
    "會計科",
    "dddd@gmail.com",
  };
  student_t student_3 = {
    77,
    55,
    44,
    0,
    0,
    0,
    0,
    87,
    88,
    "吳小東",
    "801014",
    "機械科",
    "mechanics@gmail.com",
  };
  Colloge student1(student_1);
  Colloge student2(student_2);
  Colloge student3(student_3);
  std::cout <<"\n登錄後的學生資料顯示.....";

  std::cout <<"\n\n第一位電子科學生.....";
  student1.showdata();

  std::cout <<"\n\n第一位會計科學生.....";
  student2.showdata();

  std::cout <<"\n\n第一位機械科學生.....";
  student3.showdata();

  std::cout<<"\n";
  return 0;
}
