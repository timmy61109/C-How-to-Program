#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*
	bool b;	
	b = false;
	cout<<b<<endl;
	*/
	/*
	int a = 10, b = 20;
	bool c = a == b;
	cout<<c<<endl;
	*/
	
	int a = 5, b = 6;
	bool c = a++ > --b;
	// b = b - 1 => b = 5
	// a > b => false
	// a = a + 1 => a = 6
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	return 0;
}
