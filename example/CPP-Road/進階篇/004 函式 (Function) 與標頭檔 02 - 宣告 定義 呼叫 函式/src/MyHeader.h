#include <iostream>
using namespace std;

void showInfo();
void showYear(int year);
void showDate(int year, int month, int day);

int getTotal(int start , int end);

void showInfo(){
	cout<<"�j�¤��q"<<endl;
	cout<<"�a�} : �Ѱ�Ĥ@�ϲĤG��3��4�Ӥ�5"<<endl;
	cout<<"�q�� : 1234567"<<endl;
	cout<<"�ǯu : 7654321"<<endl;
	cout<<"E-mail : abc@def.ghi.jk "<<endl;
}
void showYear(int year){
	/*
	if(year < 1000 || year > 3000){
		return;
	}
	cout<<"�~�� : "<<year<<endl;
	*/
	if(year >= 1000 && year <= 3000){
		cout<<"�~�� : "<<year<<endl;
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
	cout<<"��� : "<<year<<"/"<<month<<"/"<<day<<endl;
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







