#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {	
	/*
	char c = 'Y';
	while(c == 'Y' || c == 'y'){
		cout<<"請輸一個年份(西元年) =>";
		int year;
		cin>>year;		
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(answer){
			cout<<"潤年"<<endl;				
		}else{
			cout<<"平年"<<endl;
		}	
		
		cout<<"請輸入'Y'或'y'繼續執行, 按其他鍵結束 =>";
		cin>>c;		
	}
	*/
	/*
	while(true){
		cout<<"請輸一個年份(西元年) =>";
		int year;
		cin>>year;		
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(answer){
			cout<<"潤年"<<endl;				
		}else{
			cout<<"平年"<<endl;
		}	
		
		cout<<"請輸入'Y'或'y'繼續執行, 按其他鍵結束 =>";
		char c;
		cin>>c;		
		if(c != 'Y' && c != 'y'){
			break;
		}
	}
	*/
	/*
	while(true){
		cout<<"請輸一個年份(西元年) =>";
		int year;
		cin>>year;		
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(answer){
			cout<<"潤年"<<endl;				
		}else{
			cout<<"平年"<<endl;
		}	
		
		cout<<"請輸入'N'或'n'結束, 按其他鍵繼續執行 =>";
		char c;
		cin>>c;		
		if(c == 'N' || c == 'n'){
			break;
		}
	}
	*/
	int count = 0;
	char c = 'y';
	while(c != 'N' && c != 'n'){
		cout<<"請輸一個年份(西元年) =>";
		int year;
		cin>>year;		
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
			count++;
		}
		
		if(answer){
			cout<<"潤年"<<endl;				
		}else{
			cout<<"平年"<<endl;
		}	
		
		cout<<"請輸入'N'或'n'結束, 按其他鍵繼續執行 =>";
		cin>>c;	
	}
	cout<<count<<endl;
		 
	
		
	
	return 0;
}
