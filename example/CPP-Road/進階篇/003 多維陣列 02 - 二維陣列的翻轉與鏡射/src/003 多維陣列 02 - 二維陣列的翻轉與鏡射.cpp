//============================================================================
// Name        : 003.cpp
// Author      : 許裕永
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int array2D[4][5];
	int number = 1;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 5; j++){
			array2D[i][j] = number++;
		}
	}
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 5; j++){
			cout<<array2D[i][j]<<"\t";
		}
		cout<<endl;
	}

	for(int i = 0;  i < 4 / 2 ; i++){
		for(int j = 0; j < 5 ; j++){
			int temp = array2D[i][j];
			array2D[i][j] = array2D[3-i][j];
			array2D[3-i][j] = temp;
		}
	}


	cout<<"翻轉後:"<<endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 5; j++){
			cout<<array2D[i][j]<<"\t";
		}
		cout<<endl;
	}

	for(int i= 0 ; i < 4; i++){
		for(int j = 0; j < 5 / 2 ; j++){
			int temp = array2D[i][j];
			array2D[i][j] = array2D[i][4 - j];
			array2D[i][4 - j] = temp;
		}
	}




	cout<<"鏡射後:"<<endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 5; j++){
			cout<<array2D[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
