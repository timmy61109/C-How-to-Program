/*
 * MyHeader.h
 *
 *  Created on: 2019¦~7¤ë2¤é
 *      Author: User
 */

void changeValue1(int & a);
void changeValue2(int *& b);
void changeValue3(int * c);
int getValue(const int & d);

void changeValue1(int & a){
	a += 100;
}
void changeValue2(int *& b){
	if(b == 0){
		return;
	}
	*b += 100;
}
void changeValue3(int * c){
	*c += 100;
}

int getValue(const int & d){
	//d += 100;
	return d * d;
}
