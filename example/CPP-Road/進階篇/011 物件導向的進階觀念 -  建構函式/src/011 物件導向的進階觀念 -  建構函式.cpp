//============================================================================
// Name        : 011.cpp
// Author      : 許裕永
// Version     :
// Copyright   : CPP Road
// Description : 011 物件導向的進階觀念 -  建構函式
//============================================================================
#include "myheader.h"
#include <iostream>
using namespace std;

int main() {
	Circle c(123);
	Rectangle r(10);
	cout<<c.getRadius()<<endl;
	cout<<r.getLength()<<endl;
	cout<<r.getWidth()<<endl;
	return 0;
}
