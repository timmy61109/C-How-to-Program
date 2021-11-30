#include <iostream>
#include "complex.h"

// 傳回Complex資料型態的相加函數定義
Complex Complex::add(Complex x, Complex y) {
  return Complex(x.real + y.real, x.img + y.img);
}

Complex::Complex(float x, float y) {
  // Complex 的 constructor 定義
  real=x;
  img=y;
}

void Complex::showdata() {
  // 顯示資料
  std::cout << real << "+" << img << "i";
}

int main() {
  Complex p1(2.1, 3.17);
  // 定義Complex 類別的物件p1,並透過constructor作初值設定
  Complex p2(4.14, 5.35);
  // 定義Complex 類別的物件p2,並透過constructor作初值設定
  Complex p3;     // 定義Complex 類別的物件p3
  p3 = p3.add(p1, p2);
  p3.showdata();
  std::cout <<"\n";
  return 0;
}
