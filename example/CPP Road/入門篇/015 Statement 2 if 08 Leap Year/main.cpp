#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {	
/*
	潤年
	1.  必須是4的倍數年
	2. 不可以是100的倍數年
	3. 可以是400的倍數年
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
