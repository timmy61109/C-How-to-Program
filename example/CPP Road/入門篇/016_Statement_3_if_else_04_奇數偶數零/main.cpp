#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {	
	
	cout<<"請輸入一個數字=> ";
	int number;
	cin>>number;
	
	int a = 2;
	if(number % 2  == 1){
		a = 1;
	}else{
		if(number == 0){
			a = 0;
		}
	}		
	
	
	if(a == 0){
		cout<<"零"<<endl;		
	}else{
		if(a == 1){
			cout<<"奇數"<<endl;
		}else{
			cout<<"偶數"<<endl;			
		}			
	}
		
	
	return 0;
}
