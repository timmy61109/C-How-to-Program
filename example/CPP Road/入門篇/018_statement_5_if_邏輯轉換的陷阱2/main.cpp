#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*
	int a = -1, b = -1, c = 1;
	if(a > 0){
		cout<<"Hi"<<endl;
	}else{	
		if(b > 0){
			cout<<"Hello"<<endl;
		}else{
			if(c > 0){
				cout<<"Ha"<<endl;
			}
		}		
	}
	*/
	/*
	int a = -1, b = -1, c = 1;
	if(a > 0){
		cout<<"Hi"<<endl;
	}else if(b > 0){
		cout<<"Hello"<<endl;
	}else if(c > 0){
		cout<<"Ha"<<endl;
	}		
	*/
	
	int a = -1, b = -1, c = 1;
	if(a > 0){
		cout<<"Hi"<<endl;
	}else{		
		if(b > 0){
			cout<<"Hello"<<endl;
		} 
		cout<<"Ha"<<endl;
	}
	
	if(a > 0){
		cout<<"Hi"<<endl;
	}else if(b > 0){
		cout<<"Hello"<<endl;
		cout<<"Ha"<<endl;
	}
	return 0;
}
