#include <iostream>
#include <stdio.h>
#include <string.h>
#include "project_1.h"

int main() {
  Complex a(1.0,3.0);

  Complex b(2.0,1.0);
  std::cout << "\n第一個複數=";
  a.showdata();
  std::cout << "\n第二個複數=";
  b.showdata();
  std::cout << "\n相加結果...";

  Complex ab;
  ab.add(a,b);
  ab.showdata();
  std::cout << "\n相減結果...";
  ab.sub(a,b);
  ab.showdata();
  std::cout << "\n相乘結果...";
  ab.mul(a,b);
  ab.showdata();
  std::cout << "\n相除結果...";
  ab.div(a,b);
  ab.showdata();
  std::cout << "\n";

  return 0;
}
