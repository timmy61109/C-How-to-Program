//============================================================================
// Name        : 006.cpp
// Author      : �\�Υ�
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
	//1. �ŧi�ܼưѦ�
	//2. �z�L�ܼưѦҦs���ܼƭ�
	//3. �ŧi���аѦ�
	//4. �z�L���аѦҦs���ܼƭ�
	//5. �إߤΩI�s�ѼƬ��ܼưѦҪ��禡
	//6. �إߤΩI�s�ѼƬ����аѦҪ��禡
	//7. �إߤΩI�s��j�Ȭ��ܼưѦҪ��禡
	//8. �إߤΩI�s��j�Ȭ����аѦҪ��禡
	//9. �إߤΩI�s��j�Ȭ� const �ܼưѦҪ��禡
	//10. �إߤΩI�s��j�Ȭ� const ���аѦҪ��禡

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
