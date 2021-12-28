//============================================================================
// Name        : 007.cpp
// Author      : ³\¸Î¥Ã
// Version     :
// Copyright   : CPP Road
// Description : 007 µ²ºc (struct) 03 - °}¦C
//============================================================================

#include <iostream>
using namespace std;
#include "MyHeader.h"
int main() {
	int radius[] = {1,2,3,4,5,6,7,8,9,10};
	int height[] = {11,22,33,44,155,66,77,88,99,100};

	struct Circle circles[10];
	for(int i = 0; i < 10; i++){
		setAllValue(&circles[i], radius[i], height[i]);
	}


	for(int i = 0; i < 10; i++){
		showInfo(circles[i]);
	}
	cout<<"--------------------------------------"<<endl;

	struct Circle * pointers[10];
	for(int i = 0; i < 10; i++){
		pointers[i] = new struct Circle;
		setAllValue(pointers[i], radius[i], height[i]);
	}


	for(int i = 0; i < 10; i++){
		showInfo(*pointers[i]);
	}


	return 0;
}
