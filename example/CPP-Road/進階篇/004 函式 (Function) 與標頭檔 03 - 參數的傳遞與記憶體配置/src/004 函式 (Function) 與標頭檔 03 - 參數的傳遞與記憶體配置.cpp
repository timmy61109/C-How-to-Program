//============================================================================
// Name        : 004.cpp
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
	showValue(5);
	showTotal(6);
	int x = 10;
	showValue(x);
	showValue();
	showTotal2(1,30);
	*/

	int a = 1;
	changeValue(a);
	cout<<a<<endl;

	int array[] = {1,2,3,4,5};
	changeArrayValue(array,5);
	for(int i = 0; i < 5; i++){
		cout<<array[i]<<endl;
	}
	return 0;
}
