//============================================================================
// Name        : 006.cpp
// Author      : 砛肝ッ
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int main() {
	int a = 8;
	int & x = a;
	x = 100;
	cout<<a<<endl;
	a = 200;
	cout<<x<<endl;
	int i = 123;
	x = i;
	cout<<a<<endl;

	int * b = new int;
	*b = 8;
	int *& y = b;
	*y = 100;
	cout<<*b<<endl;
	*b = 200;
	cout<<*y<<endl;

	//int & z;
	//z = a;
	return 0;
}
























/*
 *
	//1. 跑计把σ
	//2. 硓筁跑计把σ跑计
	//3. 夹把σ
	//4. 硓筁夹把σ跑计
	//5. ミの㊣把计跑计把σㄧΑ
	//6. ミの㊣把计夹把σㄧΑ
	//7. ミの㊣癹跑计把σㄧΑ
	//8. ミの㊣癹夹把σㄧΑ
	//9. ミの㊣癹 const 跑计把σㄧΑ
	//10. ミの㊣癹 const 夹把σㄧΑ

	//1 2
	int a = 1;
	int & ra = a;
	ra = 2;
	cout<<a<<endl;
	cout<<ra<<endl;
	cout<<"-----------------------"<<endl;
	//3 4
	int * b = new int;
	*b = 10;
	int *& rb = b;
	*rb = 20;
	cout<<*b<<endl;
	cout<<*rb<<endl;
	cout<<"-----------------------"<<endl;

	//5
	int c = 100;
	changeValue(c);
	cout<<c<<endl;
	cout<<"-----------------------"<<endl;

	//6
	int * d = new int;
	*d = 1000;
	changeValue2(d);
	cout<<*d<<endl;
	cout<<"-----------------------"<<endl;

	//7
	int e = 10000;
	int & f = changeValue3(e);
	cout<<f<<endl;
	f += 5;
	cout<<e<<endl;
	cout<<"-----------------------"<<endl;


	//8
	int *g = new int;
	*g = 100000;
	int *& h  = changeValue4(g);
	cout<<*h<<endl;
	*h += 5;
	cout<<*g<<endl;
	cout<<"-----------------------"<<endl;

	//9
	int i = 1000000;
	const int & j = changeValue5(i);
	//j += 5;
	cout<<j<<endl;

	//10
	int  * k = new int;
	*k = 10000000;
	const int * n = k;
	const int *& m = changeValue6(n);
	cout<<*m<<endl;
 */
