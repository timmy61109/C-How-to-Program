//============================================================================
// Name        : 005.cpp
// Author      : �\�Υ�
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "MyHeader.h"
int main() {
	int classCount;
	cout<<"�п�J�Z�żƶq => ";
	cin>>classCount;
	double * ave = new double[classCount];

	for(int j = 0; j < classCount; j++){
		int count;
		cout<<"�п�J�ǥͤH�� => ";
		cin>>count;

		int * scores = new int[count];
		for(int i = 0; i < count; i++){
			cout<<"�п�J�ǥͦ��Z => ";
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
