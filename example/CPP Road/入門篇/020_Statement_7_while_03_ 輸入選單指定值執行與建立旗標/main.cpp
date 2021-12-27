#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	/*
	char c = '1';
	while(c != '5'){
		cout<<"請輸入需要的服務項目編號: 1.提款 2.轉帳 3.餘額查詢 4.其他服務 5.離開 => ";		
		cin>>c;
		
		switch(c){
			case '1':
				cout<<"提款"<<endl; 
				break;
			case '2':
				cout<<"轉帳"<<endl; 
				break;
			case '3':
				cout<<"餘額查詢"<<endl; 
				break;
			case '4':
				cout<<"其他服務"<<endl; 
				break;
			case '5':
				cout<<"再見"<<endl; 
				break;
			default:
				cout<<"請輸入正確編號"<<endl; 
							
		}
	}
		
	*/
	
	char c = '1';
	while(c != '5'){
		cout<<"請輸入需要的服務項目編號: 1.提款 2.轉帳 3.餘額查詢 4.其他服務 5.離開 => ";		
		cin>>c;
		bool b = true;
		switch(c){
			case '1':
				cout<<"提款"<<endl; 
				break;
			case '2':
				cout<<"轉帳"<<endl; 
				break;
			case '3':
				cout<<"餘額查詢"<<endl; 
				break;
			case '4':
				cout<<"其他服務"<<endl; 
				break;
			case '5':
				cout<<"再見"<<endl; 
				b = false;
				break;
			default:
				cout<<"請輸入正確編號"<<endl; 
							
		}
		if(!b){
			break;
		}
		cout<<"其他程式碼" <<endl; 
	}
		
	
	return 0;
}
