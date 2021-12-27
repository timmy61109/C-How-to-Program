//============================================================================
// Name        : 005.cpp
// Author      : ³\¸Î¥Ã
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "myheader.h"

int main() {
	/*
	int a = 10;
	showValue(&a);

	int * b = new int;
	*b = 20;
	showValue(b);

	showValue(new int);
	*/

	/*
	int value = 1;
	passByValue(value);
	cout<<value<<endl;

	passByPoint(&value);
	cout<<value<<endl;
	*/

	int * i = getAddressA();
	cout<<*i<<endl;
	delete i;

	int * j = getAddressB();
	*j = 200;
	cout<<*j<<endl;
	delete j;

	/*
	int * k = getAddressC();
	cout<<*k<<endl;
	*/

	int * m = new int;
	*m = 1;
	const int * n = getAddressD(m);
	cout<<*n<<endl;
	delete n;
	//*n = 10;
	return 0;
}
