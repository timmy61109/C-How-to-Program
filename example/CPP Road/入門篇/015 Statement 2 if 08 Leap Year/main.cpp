#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {	
/*
	��~
	1.  �����O4�����Ʀ~
	2. ���i�H�O100�����Ʀ~
	3. �i�H�O400�����Ʀ~
*/

	/*
	cout<<"Please input a year =>";
	int year;
	cin>>year;
	
	bool answer = false;
	if(year % 4 == 0){
		if(year % 100 != 0){
			answer = true;
		}
		if(year % 400 == 0){
			answer = true;
		}
	}
	
	if(answer){
		cout<<"It is a leap year."<<endl;
	}
	if(!answer){
		cout<<"It is a normal year."<<endl;
	}
	*/
	/* 
	cout<<"Please input a year =>";
	int year;
	cin>>year;
	
	bool answer = false;
	if(year % 4 == 0){
		if(year % 100 != 0 || year % 400 == 0){
			answer = true;
		}
	}
	
	if(answer){
		cout<<"It is a leap year."<<endl;
	}
	if(!answer){
		cout<<"It is a normal year."<<endl;
	}
	*/ 
	
	/*
	cout<<"Please input a year =>";
	int year;
	cin>>year;
	
	bool answer = false;
	if(year % 4 == 0 && year % 100 != 0 || year % 4 == 0 && year % 400 == 0){
		answer = true;
	}
	
	if(answer){
		cout<<"It is a leap year."<<endl;
	}
	if(!answer){
		cout<<"It is a normal year."<<endl;
	}
	*/
	
	/*
	cout<<"Please input a year =>";
	int year;
	cin>>year;
	
	bool answer = false;
	if(year % 4 == 0 && (year % 100 != 0 ||year % 400 == 0)){
		answer = true;
	}
	
	if(answer){
		cout<<"It is a leap year."<<endl;
	}
	if(!answer){
		cout<<"It is a normal year."<<endl;
	}
	*/
	
	cout<<"Please input a year =>";
	int year;
	cin>>year;
	
	bool answer = false;
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
		answer = true;
	}
	
	if(answer){
		cout<<"It is a leap year."<<endl;
	}
	if(!answer){
		cout<<"It is a normal year."<<endl;
	}
	return 0;
}
