/*
 * myheader.h
 *
 *  Created on: 2019¦~6¤ë19¤é
 *      Author: User
 */

#include <iostream>
using namespace std;

void showValue(int * p);

void passByValue(int value);
void passByPoint(int * pValue);

int * getAddressA();
int * getAddressB();
//int * getAddressC();
const int * getAddressD(const int * p);

void showValue(int * p){
	cout<<*p<<endl;
}

void passByValue(int value){
	value += 100;
}

void passByPoint(int * pValue){
	*pValue += 100;
}

int * getAddressA(){
	int * p = new int;
	*p = 100;
	return p;
}
int * getAddressB(){
	return new int;
}
/*
int * getAddressC(){
	int p = 8;
	return &p;
}
*/
const int * getAddressD(const int * p){
	int * q = new int;
	*q = *p;
	*q += 100;
	return q;
}

