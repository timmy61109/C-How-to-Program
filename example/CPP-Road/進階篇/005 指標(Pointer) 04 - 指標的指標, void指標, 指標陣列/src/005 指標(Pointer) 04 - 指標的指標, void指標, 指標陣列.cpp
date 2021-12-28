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
	int ** a;
	a = new int*;
	*a = new int;
	**a = 10;
	cout<<a<<endl;
	cout<<*a<<endl;
	cout<<**a<<endl;

	int * b = new int;
	*b = 20;
	a = &b;
	cout<<**a<<endl;

	void * v;
	v = b;
	cout<<b<<endl;
	cout<<v<<endl;
	cout<<*b<<endl;
	cout<<*((int*)v)<<endl;

	int * array[10];
	for(int i = 0; i < 10 ; i++){
		array[i] = new int;
		*array[i] = i + 1;
	}
	for(int i = 0; i < 10; i++){
		cout<<*array[i]<<endl;
	}

	int ** pArray;
	pArray = new int*[10];
	for(int i= 0; i < 10; i++){
		pArray[i] = new int;
		*pArray[i] = i + 1;
	}
	for(int i = 0; i < 10; i++){
		cout<<*pArray[i]<<endl;
	}

	return 0;
}
