//============================================================================
// Name        : 002.cpp
// Author      : ³\¸Î¥Ã
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void test(int[]);

int main() {
	/*
	int numbers[5];
	numbers[0] = 10;
	numbers[1] = 20;
	numbers[2] = 30;
	numbers[3] = 40;
	numbers[4] = 50;
	cout<<numbers[0]<<endl;

	int ages[] = {15,16,18,17,19};
	cout<<ages[5]<<endl;

	int scores[50] = {0};
	cout<<scores[50]<<endl;
	*/

	int numbers[5];
	int length = 5;
	for(int i = 0; i < length; i++){
		numbers[i] = 10 * (i + 1);
	}

	for(int i = length -1; i >= 0; i--){
		cout<<numbers[i]<<endl;
	}

	return 0;
}
