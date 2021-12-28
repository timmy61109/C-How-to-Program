#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*
	cout<<"請輸人月份 (1 ~ 12) => ";
	int month;
	cin>>month;
	
	int days;
	switch(month){
		case 1:
			days = 31;
			break;
		case 2:
			days = 28;
			break;
		case 3:
			days = 31;
			break;
		case 4:
			days = 30;
			break;
		case 5:
			days = 31;
			break;
		case 6:
			days = 30;
			break;
		case 7:
			days = 31;
			break;
		case 8:
			days = 31;
			break;
		case 9:
			days = 30;
			break;
		case 10:
			days = 31;
			break;
		case 11:
			days = 30;
			break;
		case 12:
			days = 31;
			break;
		default:
			days = -1;	
	}
	
	if(days != -1){
		cout<<days<<endl;
	}else{
		cout<<"月份錯誤"<<endl; 
	}
	*/	 
	/* 
	cout<<"請輸人月份 (1 ~ 12) => ";
	int month;
	cin>>month;
	
	int days;
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days = 31;
			break;
		case 2:
			days = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default:
			days = -1;	
	}
	
	if(days != -1){
		cout<<days<<endl;
	}else{
		cout<<"月份錯誤"<<endl; 
	}
	*/ 
	/*
	cout<<"請輸人月份 (1 ~ 12) => ";
	int month;
	cin>>month;
	
	int days = -1;
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days = 31;
			break;
		case 2:
			days = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
	}
	
	if(days != -1){
		cout<<days<<endl;
	}else{
		cout<<"月份錯誤"<<endl; 
	}
	*/	
	
	cout<<"請輸人月份 (1 ~ 12) => ";
	int month;
	cin>>month;
	
	int days = 31;
	switch(month){
		case 2:
			days = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default:
			if(month < 1 || month > 12){
				days = -1;
			}	
	}
	
	if(days != -1){
		cout<<days<<endl;
	}else{
		cout<<"月份錯誤"<<endl; 
	}
	return 0;
}
