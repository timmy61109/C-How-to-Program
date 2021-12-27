#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*
	int a = 11;
	
	bool answer = false;
	for(int b = 2; b < a; b++){
		if(a % b != 0){
			answer = true;
		}else{
			answer = false;
			break;
		}	
	}
	if(answer){		
		cout<<a<<"\t";
	}
	*/
	/*
	int a = 11;
	
	bool answer = true;
	for(int b = 2; b <= a / 2; b++){
		if(a % b == 0){
			answer = false;
			break;
		}
	}	
	
	if(answer){
		cout<<a<<"\t";
	}
	*/
	
	/*
	int a = 19;
	
	bool answer = true;
	for(int b = 2; b <= sqrt(a); b+=(b==2?1:2) ){
		if(a % b == 0){
			answer = false;
			break;
		}
		
		//if(b == 2){
			//b++;
		//}else{
			//b+=2;
		//}
		
	}	
	
	if(answer){
		cout<<a<<"\t";
	}
	*/
	/*
	for(int a = 2; a <= 100; a++){
		bool answer = true;
		for(int b = 2; b <= sqrt(a); b+=(b==2?1:2) ){
			if(a % b == 0){
				answer = false;
				break;
			}
		}			
		if(answer){
			cout<<a<<"\t";
		}
	}
	*/
	
		
	for(int a = 2; a <= 100; a++){
		bool answer = false;
		for(int b = 2; b <= sqrt(a); b+=(b==2?1:2) ){
			if(a % b != 0){
				answer = true;
			}else{
				answer = false;
				break;
			}
		}			
		if(answer){
			cout<<a<<"\t";
		}
	}	
	return 0;
}
