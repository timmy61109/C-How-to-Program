//============================================================================
// Name        : 009.cpp
// Author      : ³\¸Î¥Ã
// Version     :
// Copyright   : CPP Road
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Circle.h"
int main() {
	Circle c1;
	c1.radius = 10;
	cout<<c1.getGirth()<<endl;

	Circle c2;
	c2.radius = 20;
	cout<<c2.getGirth()<<endl;
	cout<<c1.getGirth()<<endl;
	cout<<"c1=>"<<&c1<<endl;
	cout<<"c2=>"<<&c2<<endl;
	cout<<"-----------------"<<endl;;
	//c1 = c2;
	cout<<c1.getGirth()<<endl;
	cout<<"c1=>"<<&c1<<endl;
	cout<<"c2=>"<<&c2<<endl;
	cout<<"-----------------"<<endl;;

	int i = c1.compare(c2);
	if(i == 0){
		cout<<"The value are the same."<<endl;
	}else if(i > 0){
		cout<<"c1 is bigger."<<endl;
	}else{
		cout<<"c2 is bigger."<<endl;
	}
	cout<<c2.getGirth()<<endl;
	cout<<"-----------------"<<endl;

	Circle c3 = c2.copy();
	cout<<c3.getGirth()<<endl;

	return 0;
}
