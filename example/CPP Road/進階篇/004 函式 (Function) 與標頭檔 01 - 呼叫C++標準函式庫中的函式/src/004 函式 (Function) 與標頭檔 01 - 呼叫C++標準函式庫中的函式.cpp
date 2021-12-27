//============================================================================
// Name        : 004.cpp
// Author      : ³\¸Î¥Ã
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	if(pow(5.0,2.0) > 50){
		exit(0);
	}
	int * x = (int*)malloc(sizeof(int));
	*x = 1243;
	cout<<*x<<endl;
	pow(5.0,2.0);
	double d = pow(2.0,8.0);
	cout<<d<<endl;
	cout<<pow(3.0,2.0)<<endl;

	double d2 = sqrt(81.0);
	cout<<d2<<endl;

	double d3 = cbrt(27.0);
	cout<<d3<<endl;

	return 0;
}
