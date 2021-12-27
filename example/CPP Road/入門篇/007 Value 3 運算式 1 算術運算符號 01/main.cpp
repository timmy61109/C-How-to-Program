#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"請輸入一個整數 => ";
	int a;
	cin>>a;
	
	cout<<"請輸入另一個整數 =>" ;
	int b;
	cin>>b; 
	
	int c = a + b;
	int d = a - b;
	int e = a * b;
	int f = a / b;
	
	cout<<a<<" + "<<b<<" = "<<c<<endl;
	cout<<a<<" - "<<b<<" = "<<d<<endl;
	cout<<a<<" * "<<b<<" = "<<e<<endl;
	cout<<a<<" / "<<b<<" = "<<f<<endl;
	
	return 0;
}
