//============================================================================
// Name        : 009.cpp
// Author      : 許裕永
// Version     :
// Copyright   : 009 物件導向基本觀念 03
// Description : 物件變數參考, 物件指標參考
//============================================================================

#include <iostream>
using namespace std;
#include "Circle.h"

int main() {
	/*
	Circle c1;
	c1.radius = 10;
	Circle & rc1 = c1;
	cout<<rc1.getArea()<<endl;
	*/

	/*
	Circle c1, c2;
	c1.radius = 10;
	c2.radius = 10;
	cout<<c1.compare(c2)<<endl;
	cout<<c1.compare2(&c2)<<endl;
	cout<<c1.compare3(c2)<<endl;
	*/
	/*
	Circle c1,c2;
	c1.radius = 20;
	c1.copy4(c2);
	cout<<c1.compare3(c1.copy4(c2))<<endl;
	*/

	/*
	Circle * pc1 = new Circle();
	Circle & rc1 = *pc1;
	Circle c1;
	c1.radius = 10;
	pc1->radius = 10;
	cout<<c1.compare3(*pc1)<<endl;
	*/

	/*
	Circle * pc1 = new Circle();
	pc1->radius = 10;

	Circle *& rpc1 = pc1;
	rpc1->radius = 100;
	cout<<pc1->getArea()<<endl;
	cout<<pc1->compare3(*pc1)<<endl;
	*/

	/*
	Circle c1;
	c1.radius = 10;
	Circle * pc1 = new Circle();
	pc1->radius = 20;
	pc1 = NULL;
	cout<<c1.compare4(pc1)<<endl;
	*/

	Circle c1;
	Circle * pc1 = new Circle();
	c1.radius = 10;
	cout<<c1.compare4(c1.copy5(pc1))<<endl;
	return 0;
}
























