//============================================================================
// Name        : 002.cpp
// Author      : 許裕永
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int scores[5];
	int length = 5;
	for(int i = 0; i < length; i++){
		cout<<"請輸入分數 =>";
		cin>>scores[i];
	}

	cout<<"你輸入的分數是:";
	for(int i = 0; i < length; i++){
		cout<<scores[i] <<'\t';
	}
	cout<<endl;

	double total = 0;
	for(int i = 0; i < length; i++){
		total += scores[i];
	}
	cout<<"平均分為: " <<total / length<<endl;

	int biggest = scores[0];
	for(int i = 1; i < length; i++){
		if(biggest < scores[i]){
			biggest = scores[i];
		}
	}
	cout<<"最高分為: "<<biggest<<endl;

	int smallestIndex = 0;
	for(int i = 1; i < length; i++){
		if(scores[smallestIndex] > scores[i]){
			smallestIndex = i;
		}
	}
	cout<<"最低分為: "<<scores[smallestIndex]<<endl;
	for(int j = 0; j < length - 1 ;j++){
		int biggestIndex = j;
		for(int i = biggestIndex + 1; i < length; i++){
			if(scores[biggestIndex]< scores[i]){
				biggestIndex = i;
			}
		}
		int temp = scores[j];
		scores[j] = scores[biggestIndex];
		scores[biggestIndex] = temp;
	}

	cout<<"排序後的分數是:";
	for(int i = 0; i < length; i++){
		cout<<scores[i] <<'\t';
	}
	cout<<endl;

	return 0;
}
