#include<iostream>
using namespace std;

void showValue(int a = 1);
void showTotal(int a);
void showTotal2(int a, int b = 20);

void changeValue(int a);
void changeArrayValue(int a[], int length);

void showValue(int a){
	cout<<a<<endl;
}
void showTotal(int a){
	int b = 10;
	cout<<a + b <<endl;
}
void showTotal2(int a, int b){
	cout<<a + b<<endl;
}
void changeValue(int a){
	a += 100;
}
void changeArrayValue(int a[], int length){
	for(int i = 0; i < length; i++){
		a[i] += 100;
	}
}
