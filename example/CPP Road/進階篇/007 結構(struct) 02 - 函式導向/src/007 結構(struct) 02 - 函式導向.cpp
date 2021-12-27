//============================================================================
// Name        : 007 結構(struct) 02 - 函式導向
// Author      : 許裕永
// Version     :
// Copyright   : CPP Road
// Description : 結構(struct) - 函式導向
//============================================================================

#include <iostream>
using namespace std;
#include "MyHeader.h"

int main() {
	/*
	struct Circle circleA;
	circleA.radius = 10;

	setRadius(&circleA, -1);
	circleA.height = 20;
	circleA.girth = getGirth(circleA);
	circleA.area = getArea(circleA);
	circleA.volume = getVolume(circleA);
	*/

	/*
	struct Circle circleA;
	setAllValue(&circleA,10,20);
	cout<<circleA.girth<<endl;
	cout<<circleA.area<<endl;
	cout<<circleA.volume<<endl;

	struct Circle * pointerA = new struct Circle;
	setAllValue(pointerA, 100,200);
	cout<<pointerA->girth<<endl;
	cout<<pointerA->area<<endl;
	cout<<pointerA->volume<<endl;

	struct Circle * pointerB = 0;
	setAllValue(pointerB, 1,2);
	if(pointerB != NULL){
		cout<<pointerB->girth<<endl;
		cout<<pointerB->area<<endl;
		cout<<pointerB->volume<<endl;
	}
	cout<<"The end."<<endl;
	*/

	/*
	struct Circle circleA;
	struct Circle circleB;
	setAllValue(&circleA, 10 ,21);
	setAllValue(&circleB, 10 ,21);
	cout<<compareCircle(circleA, circleB)<<endl;

	struct Circle * p1 = new struct Circle;
	struct Circle * p2 = new struct Circle;
	setAllValue(p1, 10 ,21);
	setAllValue(p2, 10 ,20);
	delete p2;
	cout<<compareCircle(*p1,*p2)<<endl;
	*/

	struct Circle c1;
	setAllValue(&c1, 10,20);
	struct Circle c2 = copyCircle(c1);
	cout<<getArea(c1)<<endl;
	cout<<getArea(c2)<<endl;

	struct Circle * c3 = new struct Circle;
	cout<<compareCircle(c1,*copyCircle(&c1, c3))<<endl;
	cout<<getArea(*c3)<<endl;

	setRadius(&c1,100);
	cout<<compareCircle(c1,copyCircle(c1,c2))<<endl;
	cout<<getArea(c2)<<endl;

	return 0;
}
