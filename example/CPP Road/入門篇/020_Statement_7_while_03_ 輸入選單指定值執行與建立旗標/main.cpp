#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	/*
	char c = '1';
	while(c != '5'){
		cout<<"�п�J�ݭn���A�ȶ��ؽs��: 1.���� 2.��b 3.�l�B�d�� 4.��L�A�� 5.���} => ";		
		cin>>c;
		
		switch(c){
			case '1':
				cout<<"����"<<endl; 
				break;
			case '2':
				cout<<"��b"<<endl; 
				break;
			case '3':
				cout<<"�l�B�d��"<<endl; 
				break;
			case '4':
				cout<<"��L�A��"<<endl; 
				break;
			case '5':
				cout<<"�A��"<<endl; 
				break;
			default:
				cout<<"�п�J���T�s��"<<endl; 
							
		}
	}
		
	*/
	
	char c = '1';
	while(c != '5'){
		cout<<"�п�J�ݭn���A�ȶ��ؽs��: 1.���� 2.��b 3.�l�B�d�� 4.��L�A�� 5.���} => ";		
		cin>>c;
		bool b = true;
		switch(c){
			case '1':
				cout<<"����"<<endl; 
				break;
			case '2':
				cout<<"��b"<<endl; 
				break;
			case '3':
				cout<<"�l�B�d��"<<endl; 
				break;
			case '4':
				cout<<"��L�A��"<<endl; 
				break;
			case '5':
				cout<<"�A��"<<endl; 
				b = false;
				break;
			default:
				cout<<"�п�J���T�s��"<<endl; 
							
		}
		if(!b){
			break;
		}
		cout<<"��L�{���X" <<endl; 
	}
		
	
	return 0;
}
