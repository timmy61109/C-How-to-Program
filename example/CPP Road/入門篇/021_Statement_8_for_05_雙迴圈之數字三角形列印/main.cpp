#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*
	for(int b = 1; b <= 5; b++){
		for(int a= 1; a <= b; a++){
			cout<<a;
		}
		cout<<endl;
	}
	*/
	/*
	for(int b = 1; b <= 5; b++){
		for(int a= 1; a <= 6 - b; a++){
			cout<<a;
		}
		cout<<endl;
	}
	*/
	
	/*
	for(int b = 1; b <= 5; b++){
		for(int a= 1; a <= 6 - b; a++){
			cout<<6-a;
		}
		cout<<endl;
	}		
	*/
	/*
	for(int c = 1; c <= 9; c+=2){
		for(int a = 1; a <= (9 - c) / 2; a++){
			cout<<" ";
		}
		for(int b = 1; b <= c ; b++){
			cout<<b;
		}
		cout<<endl;
	}
	*/
	/*
	for(int c = 4; c >= 0; c--){
		for(int a = 1; a <= c; a++){
			cout<<" ";
		}
		for(int b = 1; b <= 9 - 2 * c; b++){
			cout<<b;
		}
		cout<<endl;
	}
	*/
	/*
	for(int c = 0; c <= 3; c++){
		for(int a = 1; a <= c; a++){
			cout<<" ";
		}
		for(int b = 1; b <= 9 - 2 * c; b++){
			cout<<b;
		}
		cout<<endl;
	}	
	
	for(int c = 4; c >= 0; c--){
		for(int a = 1; a <= c; a++){
			cout<<" ";
		}
		for(int b = 1; b <= 9 - 2 * c; b++){
			cout<<b;
		}
		cout<<endl;
	}
	*/ 
	
	for(int d = 1; d <= 5; d++){
		for(int c = 0; c <= 3; c++){
			for(int a = 1; a <= c; a++){
				cout<<" ";
			}
			for(int b = 1; b <= 9 - 2 * c; b++){
				cout<<b;
			}
			cout<<endl;
		}	
		
		for(int c = 4; c >= 0; c--){
			for(int a = 1; a <= c; a++){
				cout<<" ";
			}
			for(int b = 1; b <= 9 - 2 * c; b++){
				cout<<b;
			}
			cout<<endl;
		}
	}	
	return 0;
}
