#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"Hello World!"<<endl<<"Other word"<<endl;
	
	cout<<"請輸入任意整數=>"; 
	int a;
	cin>>a;
	cout<<"The value of a is : "<<a<<endl;
	
	cout<<"請輸入任意浮點數=>"; 
	double b;
	cin>>b;
	cout<<"The value of b is : "<<b<<endl;
	
	cout<<"請輸入任意字元=>"; 
	char c;
	cin>>c;
	cout<<"The value of c is : "<<c<<endl;	
	
	cout<<"請輸入任意字串=>"; 
	string d;
	cin>>d;
	cout<<"The value of d is : "<<d<<endl;
	return 0;
}
