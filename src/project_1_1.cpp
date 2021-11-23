#include <iostream>
#include <stdio.h>
#include <string.h>
#include "project_1.h"

//Constructor
Complex::Complex(float r,float i) {
  real = r;
  img = i;
}

//相加函數
Complex& Complex::add(const Complex &c,const Complex& d) {
  real = c.real + d.real;
  img = c.img + d.img;
  return *this;  // 以this指標傳回整個類別
}

//相減函數
Complex& Complex::sub(const Complex &c,const Complex& d) {
  real=c.real - d.real;
  img=c.img - d.img;
  return *this;  // 以this指標傳回整個類別
}

//相乘函數
Complex& Complex::mul(const Complex &c,const Complex& d) {
  real = c.real * d.real - c.img * d.img;
  img = c.real * d.img + c.img * d.real;
  return *this;  // 以this指標傳回整個類別
}

//相除函數
Complex& Complex::div(const Complex &c,const Complex& d) {
  float tmp;
  tmp = d.real * d.real + d.img * d.img;
  real = (c.real * d.real + c.img * d.img) / tmp;
  img = ((-1) * c.real * d.img + c.img * d.real) / tmp;
  return *this;  // 以this指標傳回整個類別
}

//顯示函數
void Complex::showdata() {
  if (img >= 0) {
    std::cout << real << "+" << img << "i\n";
  } else {
    std::cout << real << "-" << img << "i\n";
  }
}
