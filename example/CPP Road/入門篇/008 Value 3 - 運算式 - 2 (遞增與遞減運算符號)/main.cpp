#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*
	int a = 10;
	a++; //a = a + 1;
	cout<<a<<endl;
	++a; //a = a + 1;
	cout<<a<<endl;
	--a; //a = a -1;
	cout<<a<<endl;
	a--; //a = a -1;
	cout<<a<<endl;
	*/
	
	/*
	int a = 5;
	int b = 6;
	int c;
	//a = a + 1;
	//c = a + b;
	c = ++a + b;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	*/
	
	
	int a = 5;
	int b = 6;
	int c;
	//c = a + b;
	//a = a + 1;
	c = a++ + b;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	return 0;
}
