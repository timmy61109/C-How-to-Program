//============================================================================
// Name        : 009.cpp
// Author      : 許裕永
// Version     :
// Copyright   : 009 物件導向基本觀念 02
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Circle.h"
int main() {
	/*
	Circle * pc1;
	Circle * pc2 = new Circle;

	pc1 = new Circle();

	cout<<pc1<<endl;
	cout<<pc2<<endl;
	cout<<"--------------------"<<endl;

	delete pc2;
	pc2 = pc1;
	cout<<pc1<<endl;
	cout<<pc2<<endl;
	cout<<"--------------------"<<endl;

	Circle c;
	Circle * pc3 = &c;
	cout<<&c<<endl;
	cout<<pc3<<endl;
	cout<<"--------------------"<<endl;

	*/

	/*
	Circle * pc1 = new Circle();
	pc1->radius = 10;
	cout<<pc1->getGirth()<<endl;
	cout<<pc1->getArea()<<endl;

	Circle c;
	c.radius = 10;

	int i = pc1->compare2(&c);
	cout<<i<<endl;

	Circle * pc2 = new Circle();
	pc2->radius = 30;
	int i2 = pc1->compare2(pc2);
	cout<< i2 << endl;

	int i3 = pc1->compare2(new Circle());
	cout<< i3<<endl;
	*/


	Circle * pc1 = new Circle();
	pc1->radius = 10;

	Circle c;
	c.radius = 123;
	pc1->copy2(&c);
	cout<<c.radius<<endl;

	Circle * pc2 = new Circle();
	pc1->copy3(pc2);
	cout<<pc2->radius<<endl;

	Circle * pc3 = new Circle();
	int i = pc1->compare2(pc1->copy3(pc3));
	cout<<i<<endl;

	delete pc1;
	delete pc2;
	delete pc3;
	return 0;
}
