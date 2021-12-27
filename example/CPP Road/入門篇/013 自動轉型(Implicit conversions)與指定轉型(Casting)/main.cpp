#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a = 3 * 3 * 3.14159;
	cout<<a<<endl;
	
	double b =  123.456;
	int c = 123 * 456 * b;
	int d = 123 * 456 * (int)b;
	int e = (int)(123 * 456 * b);
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	
	return 0;
}
