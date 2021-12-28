//============================================================================
// Name        : 006.cpp
// Author      : ³\¸Î¥Ã
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "MyHeader.h"

int main() {
	/*
	int r = 10;
	int & p = getReferenceA(r);
	cout<<r<<endl;
	cout<<p<<endl;

	Circle c;
	c.radius = 10;
	c.showArea();
	c.radius = 100;
	c.showArea();

	changeRadius(c, 200).showArea();
	*/

	int * p = new int;
	*p = 1;
	int *q = getReferenceB(p);
	cout<<*q<<endl;

	Circle * c = new Circle;
	c->radius = 10;
	c->showArea();
	changeRadius2(c,100)->showArea();

	return 0;
}
;
