//============================================================================
// Name        : 011.cpp
// Author      : 許裕永
// Version     :
// Copyright   : CPP Road
// Description : 011 物件導向的進階觀念 - 封裝與繼承 02
//============================================================================

#include <iostream>
using namespace std;
#include "myheader.h"
int main() {
	Circle c1;
	c1.setRadius(10);
	cout<<c1.getArea()<<endl;
	cout<<c1.getGirth()<<endl;

	Rectangle r1;
	cout<<r1.getArea()<<endl;
	cout<<r1.getGirth()<<endl;
	return 0;
}
