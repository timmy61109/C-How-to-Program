#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
	分數等級評定說明
	90 以上 優
	80 ~ 89 甲
	70 ~ 79 乙
	60 ~ 69 丙
	59 以下 丁 
*/
int main(int argc, char** argv) {
	
	/* 
	cout<<"請輸入分數 => ";
	int score;
	cin>>score;
	string s;
	int i = score / 10;
	switch(i){
		case 10:
		case 9:
			s = "優";
			break;
		case 8:
			s = "甲";
			break;
		case 7:
			s = "乙";
			break;
		case 6:
			s = "丙";
			break;
		default:
			s = "丁";
			break;			
	}
	if(score < 0 ||score > 100){
		s = "分數錯誤"; 
	}
	
	cout<<s<<endl; 
	*/ 
	
	/* 
	cout<<"請輸入分數 => ";
	int score;
	cin>>score;
	string s;
	if(score>= 0 && score <=100){		
		int i = score / 10;
		switch(i){
			case 10:
			case 9:
				s = "優";
				break;
			case 8:
				s = "甲";
				break;
			case 7:
				s = "乙";
				break;
			case 6:
				s = "丙";
				break;
			default:
				s = "丁";
				break;			
		}
	} else{
		s = "分數錯誤"; 
	}
	
	cout<<s<<endl; 
	*/ 
	
	/*
	cout<<"請輸入分數 => ";
	int score;
	cin>>score;
	string s = "分數錯誤";	
	int i = score / 10;
	switch(i){
		case 10:
			if(score > 100) {
				break;
			}
		case 9:
			s = "優";
			break;
		case 8:
			s = "甲";
			break;
		case 7:
			s = "乙";
			break;
		case 6:
			s = "丙";
			break;
		default:
			if(score < 0 || score > 100){
				break;
			}
			s = "丁";
			break;			
	}
	
	cout<<s<<endl; 
	*/
	
	cout<<"請輸入分數 => ";
	int score;
	cin>>score;
	string s = "分數錯誤";	
	int i = score / 10;
	switch(i){
		case 9:
			s = "優";
			break;
		case 8:
			s = "甲";
			break;
		case 7:
			s = "乙";
			break;
		case 6:
			s = "丙";
			break;
		default:
			if(score < 0 || score > 100){
				break;
			}else if( score < 60){
				s = "丁" ; 
			}else{
				s = "優";
			}
			break;			
	}
	
	cout<<s<<endl; 
	return 0;
}
