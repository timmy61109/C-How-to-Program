/*
 * MyHeader.h
 *
 *  Created on: 2019¦~7¤ë5¤é
 *      Author: User
 */

#include <iostream>
using namespace std;
class Circle{
public:
	int radius;
	void showGirth(){
		double girth = radius * 2 * 3.14159;
		cout<<girth<<endl;
	}
	void showArea(){
		double girth = radius * radius * 3.14159;
		cout<<girth<<endl;
	}

};

int & getReferenceA(int & r);
int *& getReferenceB(int *& r);

Circle & changeRadius(Circle & c , int radius = 0);
Circle *& changeRadius2(Circle *& c , int radius = 0);

int & getReferenceA(int & r){
	 r += 10;
	return r;
}
int *& getReferenceB(int *& r){
	*r += 100;
	return r;
}

Circle & changeRadius(Circle & c, int radius){
	if(radius >= 0 && radius <= 1000){
		c.radius = radius;
	}
	return c;
}
Circle *& changeRadius2(Circle *& c , int radius){
	if(radius >= 0 && radius <= 1000){
			c->radius = radius;
		}
		return c;
}
