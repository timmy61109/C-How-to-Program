#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {	
	/*	
	int year = 1;
	while(year != 0){
		cout<<"�п�@�Ӧ~��(�褸�~),�� 0 ���} =>";
		cin>>year;
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(answer){
			if(year != 0){
				cout<<"��~"<<endl;
			}else{
				cout<<"���¨ϥ�"<<endl; 
			}				
		}else{
			cout<<"���~"<<endl;
		}
	}
	*/
	/*
	
	int year = 1;
	while(year != 0){
		cout<<"�п�@�Ӧ~��(�褸�~),�� 0 ���} =>";
		cin>>year;
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(answer && year != 0){
			cout<<"��~"<<endl;
		}else if(answer && year == 0){
			cout<<"���¨ϥ�"<<endl; 				
		}else{
			cout<<"���~"<<endl;
		}
	}
	*/
	/*
	int year = 1;
	while(year != 0){
		cout<<"�п�@�Ӧ~��(�褸�~),�� 0 ���} =>";
		cin>>year;
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(year != 0){
			if(answer){
				cout<<"��~"<<endl;				
			}else{
				cout<<"���~"<<endl;
			}
		}else{
			cout<<"���¨ϥ�"<<endl;
		}			
	}
	*/	
	/* 
	int year = 1;
	while(year != 0){
		cout<<"�п�@�Ӧ~��(�褸�~),�� 0 ���} =>";
		cin>>year;
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(year == 0){
			cout<<"���¨ϥ�"<<endl;
		}else{
			if(answer){
				cout<<"��~"<<endl;				
			}else{
				cout<<"���~"<<endl;
			}
		}			
	}	
	*/ 
	/*
	int year = 1;
	while(year != 0){
		cout<<"�п�@�Ӧ~��(�褸�~),�� 0 ���} =>";
		cin>>year;
		
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(year == 0){
			cout<<"���¨ϥ�"<<endl;
		}else if(answer){
			cout<<"��~"<<endl;				
		}else{
			cout<<"���~"<<endl;
		}		
	}	
	
	*/
	/*
	int year = 1;
	while(year != 0){
		cout<<"�п�@�Ӧ~��(�褸�~),�� 0 ���} =>";
		cin>>year;
		if(year != 0){
			bool answer = false;
			if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
				answer = true;
			}
			
			if(answer){
				cout<<"��~"<<endl;				
			}else{
				cout<<"���~"<<endl;
			}	
		}else{
			cout<<"���¨ϥ�"<<endl;
		}				
	}	
	*/
	
	while(true){
		cout<<"�п�@�Ӧ~��(�褸�~),�� 0 ���} =>";
		int year;
		cin>>year;
		
		if(year == 0) {
			cout<<"���¨ϥ�"<<endl;
			break;
		}
		bool answer = false;
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
		
		if(answer){
			cout<<"��~"<<endl;				
		}else{
			cout<<"���~"<<endl;
		}					
	}	
	return 0;
}
