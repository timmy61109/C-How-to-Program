#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {	
	/*
	char c = 'Y';
	while(c == 'Y' || c == 'y'){
		cout<<"�п�@�Ӧ~��(�褸�~) =>";
		int year;
		cin>>year;		
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(answer){
			cout<<"��~"<<endl;				
		}else{
			cout<<"���~"<<endl;
		}	
		
		cout<<"�п�J'Y'��'y'�~�����, ����L�䵲�� =>";
		cin>>c;		
	}
	*/
	/*
	while(true){
		cout<<"�п�@�Ӧ~��(�褸�~) =>";
		int year;
		cin>>year;		
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(answer){
			cout<<"��~"<<endl;				
		}else{
			cout<<"���~"<<endl;
		}	
		
		cout<<"�п�J'Y'��'y'�~�����, ����L�䵲�� =>";
		char c;
		cin>>c;		
		if(c != 'Y' && c != 'y'){
			break;
		}
	}
	*/
	/*
	while(true){
		cout<<"�п�@�Ӧ~��(�褸�~) =>";
		int year;
		cin>>year;		
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(answer){
			cout<<"��~"<<endl;				
		}else{
			cout<<"���~"<<endl;
		}	
		
		cout<<"�п�J'N'��'n'����, ����L���~����� =>";
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
		cout<<"�п�@�Ӧ~��(�褸�~) =>";
		int year;
		cin>>year;		
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
			count++;
		}
		
		if(answer){
			cout<<"��~"<<endl;				
		}else{
			cout<<"���~"<<endl;
		}	
		
		cout<<"�п�J'N'��'n'����, ����L���~����� =>";
		cin>>c;	
	}
	cout<<count<<endl;
		 
	
		
	
	return 0;
}
