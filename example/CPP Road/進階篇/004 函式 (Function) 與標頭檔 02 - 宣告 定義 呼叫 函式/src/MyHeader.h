#include <iostream>
using namespace std;

void showInfo();
void showYear(int year);
void showDate(int year, int month, int day);

int getTotal(int start , int end);

void showInfo(){
	cout<<"大笨公司"<<endl;
	cout<<"地址 : 天堂第一區第二街3號4樓之5"<<endl;
	cout<<"電話 : 1234567"<<endl;
	cout<<"傳真 : 7654321"<<endl;
	cout<<"E-mail : abc@def.ghi.jk "<<endl;
}
void showYear(int year){
	/*
	if(year < 1000 || year > 3000){
		return;
	}
	cout<<"年份 : "<<year<<endl;
	*/
	if(year >= 1000 && year <= 3000){
		cout<<"年份 : "<<year<<endl;
	}
}
void showDate(int year, int month, int day){
	if(year < 1000 || year > 3000){
		return;
	}

	if(month < 1 || month > 12){
		return;
	}
	if(day < 1){
		return;
	}
	if(day > 31){
		return;
	}
	cout<<"日期 : "<<year<<"/"<<month<<"/"<<day<<endl;
}
int getTotal(int start, int end){
	if(start == end){
		return start;
	}
	int total = 0;
	for(int i = start; i <= end; i++){
		total += i;
	}
	return total;
}







