#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {	
	/*	
	int year = 1;
	while(year != 0){
		cout<<"請輸一個年份(西元年),按 0 離開 =>";
		cin>>year;
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(answer){
			if(year != 0){
				cout<<"潤年"<<endl;
			}else{
				cout<<"謝謝使用"<<endl; 
			}				
		}else{
			cout<<"平年"<<endl;
		}
	}
	*/
	/*
	
	int year = 1;
	while(year != 0){
		cout<<"請輸一個年份(西元年),按 0 離開 =>";
		cin>>year;
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(answer && year != 0){
			cout<<"潤年"<<endl;
		}else if(answer && year == 0){
			cout<<"謝謝使用"<<endl; 				
		}else{
			cout<<"平年"<<endl;
		}
	}
	*/
	/*
	int year = 1;
	while(year != 0){
		cout<<"請輸一個年份(西元年),按 0 離開 =>";
		cin>>year;
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(year != 0){
			if(answer){
				cout<<"潤年"<<endl;				
			}else{
				cout<<"平年"<<endl;
			}
		}else{
			cout<<"謝謝使用"<<endl;
		}			
	}
	*/	
	/* 
	int year = 1;
	while(year != 0){
		cout<<"請輸一個年份(西元年),按 0 離開 =>";
		cin>>year;
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(year == 0){
			cout<<"謝謝使用"<<endl;
		}else{
			if(answer){
				cout<<"潤年"<<endl;				
			}else{
				cout<<"平年"<<endl;
			}
		}			
	}	
	*/ 
	/*
	int year = 1;
	while(year != 0){
		cout<<"請輸一個年份(西元年),按 0 離開 =>";
		cin>>year;
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(year == 0){
			cout<<"謝謝使用"<<endl;
		}else if(answer){
			cout<<"潤年"<<endl;				
		}else{
			cout<<"平年"<<endl;
		}		
	}	
	
	*/
	/*
	int year = 1;
	while(year != 0){
		cout<<"請輸一個年份(西元年),按 0 離開 =>";
		cin>>year;
		if(year != 0){
			bool answer = false;
			if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
				answer = true;
			}
			
			if(answer){
				cout<<"潤年"<<endl;				
			}else{
				cout<<"平年"<<endl;
			}	
		}else{
			cout<<"謝謝使用"<<endl;
		}				
	}	
	*/
	
	while(true){
		cout<<"請輸一個年份(西元年),按 0 離開 =>";
		int year;
		cin>>year;
		
		if(year == 0) {
			cout<<"謝謝使用"<<endl;
			break;
		}
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(answer){
			cout<<"潤年"<<endl;				
		}else{
			cout<<"平年"<<endl;
		}					
	}	
	return 0;
}
