#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*
	cout<<"Please input a number => ";
	int number;
	cin>>number;
	
	int a;
	if(number % 2  == 1){
		a = 1;
	}
	if(number % 2 == 0){
		a = 2;
	}
	if(number == 0 ){
		a = 0;
	}
	
	
	if(a == 0){
		cout<<"Zero"<<endl;		
	}
	if(a == 1){
		cout<<"Add"<<endl;
	}
	if(a == 2){
		cout<<"Even"<<endl;
	}
	*/
	/* 
	cout<<"Please input a number => ";
	int number;
	cin>>number;
	
	int a;
	if(number == 0 ){
		a = 0;
	}
	if(number % 2  == 1){
		a = 1;
	}
	if(number % 2 == 0){
		a = 2;
	}
	
	
	if(a == 0){
		cout<<"Zero"<<endl;		
	}
	if(a == 1){
		cout<<"Add"<<endl;
	}
	if(a == 2){
		cout<<"Even"<<endl;
	}
	*/ 
	
	
	cout<<"Please input a number => ";
	int number;
	cin>>number;
	
	int a = 2;
	if(number % 2  == 1){
		a = 1;
	}
	if(number == 0){
		a = 0;
	}
	
	
	if(a == 0){
		cout<<"Zero"<<endl;		
	}
	if(a == 1){
		cout<<"Add"<<endl;
	}
	if(a == 2){
		cout<<"Even"<<endl;
	}
	return 0;
}
