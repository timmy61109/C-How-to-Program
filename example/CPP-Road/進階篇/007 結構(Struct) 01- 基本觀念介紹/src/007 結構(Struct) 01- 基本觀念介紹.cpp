//============================================================================
// Name        : 007.cpp
// Author      : ³\¸Î¥Ã
// Version     :
// Copyright   : CPP Road
// Description : struct
//============================================================================

#include <iostream>
using namespace std;

struct Circle{
	int radius;
	int height;
	double girth;
	double area;
	double volume;
}variableA, variableB,
*pointerA, *pointerB=new struct Circle,
&referenceA=variableA, *&referenceB=pointerB;


int main(){
	cout<<"Variable:"<<endl;
	variableA.radius = 10;
	cout<<variableA.radius<<endl;
	variableB.radius = 20;
	cout<<variableB.radius<<endl;
	struct Circle variableC;
	variableC.radius = 30;
	cout<<variableC.radius<<endl;

	cout<<"------------------------------------"<<endl;
	cout<<"Pointer:"<<endl;
	pointerA = new struct Circle;
	pointerA->radius = 40;
	cout<<pointerA->radius<<endl;
	pointerB->radius = 50;
	cout<<pointerB->radius<<endl;
	struct Circle * pointerC = new struct Circle;
	pointerC->radius = 60;
	cout<<pointerC->radius<<endl;

	cout<<"------------------------------------"<<endl;
	cout<<"Reference:"<<endl;
	referenceA.radius = 70;
	cout<<referenceA.radius<<endl;

	referenceB->radius = 80;
	cout<<referenceB->radius<<endl;

	struct Circle & referenceC = variableC;
	referenceC.radius = 90;
	cout<<referenceC.radius<<endl;

	struct Circle *& referenceD = pointerC;
	referenceD->radius = 100;
	cout<<referenceD->radius<<endl;


	return 0;
}
