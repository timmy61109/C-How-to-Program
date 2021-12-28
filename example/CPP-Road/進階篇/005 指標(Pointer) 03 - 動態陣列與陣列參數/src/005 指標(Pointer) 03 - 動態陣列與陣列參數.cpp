//============================================================================
// Name        : 005.cpp
// Author      : 許裕永
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "MyHeader.h"
int main() {
	int classCount;
	cout<<"請輸入班級數量 => ";
	cin>>classCount;
	double * ave = new double[classCount];

	for(int j = 0; j < classCount; j++){
		int count;
		cout<<"請輸入學生人數 => ";
		cin>>count;

		int * scores = new int[count];
		for(int i = 0; i < count; i++){
			cout<<"請輸入學生成績 => ";
			cin>>scores[i];
		}

		ave[j] = getAverage(scores, count);
		delete scores;

		cout<<"--------------------------------"<<endl;
	}

	for(int j = 0; j < classCount; j++){
		cout<<ave[j]<<endl;
	}

	return 0;
}
