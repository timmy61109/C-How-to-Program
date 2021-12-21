#include <iostream>
#include "prog6.h"


int main() {
  std::cout << "\n公司資料輸入.....";  // 第一個公司
  Human a1;  // 人事資料
  a1.getdata();
  Account a2;  // 會計資料
  a2.getdata();
  Sales a3;  // 營業資料
  a3.getdata();
  std::cout << "\n公司資料顯示.......";
  a1.showdata();  // 第一個公司
  a2.showdata();
  a3.showdata();
  std::cout << "\n";
  return 0;
}
