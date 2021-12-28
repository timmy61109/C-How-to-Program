#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"請輸入開始日是星期幾(0 ~ 6) => ";
	int startDay;
	cin>>startDay;
	startDay = startDay % 7;
	
	cout<<"請輸入要運算的天數 => " ;
	int count;
	cin>>count;
	
	int theDay = startDay + count % 7; //模數(模除) 
	theDay = theDay % 7; //取得連續範圍的整數 
	
	string strStartDay = "";
	switch(startDay){
		case 0:
			strStartDay = "Sunday";
			break;
		case 1:
			strStartDay = "Monday";
			break;
		case 2:
			strStartDay = "Tuesday";
			break;
		case 3:
			strStartDay = "Wednesday";
			break;
		case 4:
			strStartDay = "Thursday";
			break;
		case 5:
			strStartDay = "Friday";
			break;
		case 6:
			strStartDay = "Saturday";
			break;
	}
	string strTheDay = "";
	switch(theDay){
		case 0:
			strTheDay = "Sunday";
			break;
		case 1:
			strTheDay = "Monday";
			break;
		case 2:
			strTheDay = "Tuesday";
			break;
		case 3:
			strTheDay = "Wednesday";
			break;
		case 4:
			strTheDay = "Thursday";
			break;
		case 5:
			strTheDay = "Friday";
			break;
		case 6:
			strTheDay = "Saturday";
			break;
	}
	cout<<strStartDay<<" 經過 "<<count<<" 天後是 "<<strTheDay<<endl; 
	
	/*
	int x;	 // 1 ~ 30
	x = x % 30 + 1;
	int y; // 8 ~ 13
	y = y % 6 + 8;
	*/
	return 0;
}
