//============================================================================
// Name        : 005.cpp
// Author      : ³\¸Î¥Ã
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a;
	a = 8;
	cout<<a<<endl;

	int * p;
	p = &a;
	cout<<p<<endl;

	*p = 10;
	cout<<*p<<endl;
	cout<<a<<endl;

	int * q = &a;
	*q = 20;
	cout<<a<<endl;
	cout<<*p<<endl;

	int * r;
	r = new int;
	*r = 100;
	cout<<r<<endl;
	cout<<*r<<endl;

	int * s = r;
	*s = 200;
	cout<<*r<<endl;

	delete r;
	cout<<r<<endl;
	cout<<*r<<endl;

	cout<<s<<endl;
	cout<<*s<<endl;

	r = new int;
	*r = 300;
	cout<<r<<endl;
	cout<<*r<<endl;


	int * const m = new int;
	*m = 100;
	*m = 200;
	cout<<*m<<endl;
	delete m;
	//m = new int;

	const int * n = r;
	//*n = 100;
	cout<<*n<<endl;
	n = s;
	cout<<*n<<endl;















	return 0;
}
