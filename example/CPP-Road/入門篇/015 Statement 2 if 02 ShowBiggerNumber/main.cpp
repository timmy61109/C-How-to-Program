#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"請輸入任意整數 => ";
	int a;
	cin>>a;
	
	cout<<"請輸入任意整數 => ";
	int b;
	cin>>b;
	
	
	
	if(a > b){
		cout<<"比較大的值是:"<<a<<endl;
	}
	
	if(a < b){
		cout<<"比較大的值是:"<<b<<endl;
	}
	
	if(a == b){
		cout<<"兩個值一樣大"<<endl;
	}
	
	return 0;
}
