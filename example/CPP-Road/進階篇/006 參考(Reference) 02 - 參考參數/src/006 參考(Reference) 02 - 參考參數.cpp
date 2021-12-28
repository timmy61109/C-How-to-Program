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
	int i = 1;
	changeValue1(i);
	cout<<i<<endl;

	int * p = new int;
	*p = 1;
	changeValue2(p);
	cout<<*p<<endl;


	int x = 1;
	changeValue3(&x);
	cout<<x<<endl;

	changeValue3(new int);


	int y = 5;
	int z = getValue(y);
	cout<<z<<endl;
	return 0;
}
