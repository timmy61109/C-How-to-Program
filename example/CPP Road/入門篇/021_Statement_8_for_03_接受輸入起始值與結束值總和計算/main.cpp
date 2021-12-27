#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	cout<<"請輸入起始值 => ";
	int start;
	cin>>start;
	cout<<"請輸入結束值 => ";
	int end;
	cin>>end;
	/*
	int total = 0;
	if(start < end){
		for(int a = start; a <= end; a++){
			total += a;
		}
	}else{
		for(int a = end; a <= start; a++){
			total += a;
		}
	}
	*/
	/*	
	int total = 0;
	for(int a = start; a <= end; a++){
		total += a;
	}
	for(int a = end; a <= start; a++){
		total += a;
	}
	if(start == end){
		total -= start;
	}
	cout<<total<<endl;
	*/
	
	/*
	int total = 0;
	if(start > end){
		int temp = start ;
		start = end;
		end = temp;
	}
	for(int a = start; a <= end; a++){
		total += a;
	}
	cout<<total<<endl;
	*/
	
	/*
	int total = 0;
	for(int a = (start < end ? start : end); a <= (start > end ? start : end); a++){
		total += a;
	}
	*/
	
	int total = 0;
	for(int a = (start < end ? start : end); a <= (start > end ? start : end); total += a++);
	
	cout<<total<<endl;
	
	
	return 0;
}
