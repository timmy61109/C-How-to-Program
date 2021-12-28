//============================================================================
// Name        : 003.cpp
// Author      : ³\¸Î¥Ã
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/*
	int sales[3][4];
	sales[0][0] = 120;
	sales[1][1] = 240;
	cout<<sales[0][0]<<endl;
	*/

	int array2D[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	for(int i = 0; i < 4;i++){
		for(int j = 0; j < 3; j++){
			cout<<array2D[i][j]<<"\t";
		}
		cout<<endl;
	}


	int array2D2[5][2] ={{0}};
	for(int i = 0; i < 5;i++){
		for(int j = 0; j < 2; j++){
			cout<<array2D2[i][j]<<"\t";
		}
		cout<<endl;
	}

	return 0;
}

