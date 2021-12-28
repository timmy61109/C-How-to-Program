#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*
	for(int b = 1; b<= 9; b++){
		for(int a = 1; a <= 9; a++){
			cout<<b<<"*"<<a<<"="<<b * a<<"\t"; 
		}
		cout<<endl;
	}
	*/
	
	for(int b = 1; b<= 9; b++){
		for(int a = 1; a <= 9; a++){
			int t = b * a;
			cout<<b<<"*"<<a<<(t >= 10 ? "=" : "= ")<<t<<"\t"; 
		}
		cout<<endl;
	}
		
	
	return 0;
}
