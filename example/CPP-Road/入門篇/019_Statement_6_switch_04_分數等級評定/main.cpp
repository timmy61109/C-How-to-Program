#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
	���Ƶ��ŵ��w����
	90 �H�W �u
	80 ~ 89 ��
	70 ~ 79 �A
	60 ~ 69 ��
	59 �H�U �B 
*/
int main(int argc, char** argv) {
	
	/* 
	cout<<"�п�J���� => ";
	int score;
	cin>>score;
	string s;
	int i = score / 10;
	switch(i){
		case 10:
		case 9:
			s = "�u";
			break;
		case 8:
			s = "��";
			break;
		case 7:
			s = "�A";
			break;
		case 6:
			s = "��";
			break;
		default:
			s = "�B";
			break;			
	}
	if(score < 0 ||score > 100){
		s = "���ƿ��~"; 
	}
	
	cout<<s<<endl; 
	*/ 
	
	/* 
	cout<<"�п�J���� => ";
	int score;
	cin>>score;
	string s;
	if(score>= 0 && score <=100){		
		int i = score / 10;
		switch(i){
			case 10:
			case 9:
				s = "�u";
				break;
			case 8:
				s = "��";
				break;
			case 7:
				s = "�A";
				break;
			case 6:
				s = "��";
				break;
			default:
				s = "�B";
				break;			
		}
	} else{
		s = "���ƿ��~"; 
	}
	
	cout<<s<<endl; 
	*/ 
	
	/*
	cout<<"�п�J���� => ";
	int score;
	cin>>score;
	string s = "���ƿ��~";	
	int i = score / 10;
	switch(i){
		case 10:
			if(score > 100) {
				break;
			}
		case 9:
			s = "�u";
			break;
		case 8:
			s = "��";
			break;
		case 7:
			s = "�A";
			break;
		case 6:
			s = "��";
			break;
		default:
			if(score < 0 || score > 100){
				break;
			}
			s = "�B";
			break;			
	}
	
	cout<<s<<endl; 
	*/
	
	cout<<"�п�J���� => ";
	int score;
	cin>>score;
	string s = "���ƿ��~";	
	int i = score / 10;
	switch(i){
		case 9:
			s = "�u";
			break;
		case 8:
			s = "��";
			break;
		case 7:
			s = "�A";
			break;
		case 6:
			s = "��";
			break;
		default:
			if(score < 0 || score > 100){
				break;
			}else if( score < 60){
				s = "�B" ; 
			}else{
				s = "�u";
			}
			break;			
	}
	
	cout<<s<<endl; 
	return 0;
}
