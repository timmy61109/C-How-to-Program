//============================================================================
// Name        : 004.cpp
// Author      : ³\¸Î¥Ã
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "MyHeader.h"

int main() {

	showInfo();
	showYear(2015);
	showDate(2019,5,16);



	int total = getTotal(1000,1000);
	cout<<total<<endl;

	return 0;
}


