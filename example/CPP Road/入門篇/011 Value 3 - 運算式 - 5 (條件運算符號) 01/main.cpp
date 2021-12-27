#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//&& and
	/*
		true && true => true
		true && false => false
		false && true => false
		false && false => false
	*/
	//|| Or	
	/*
		true && true => true
		true && false => true
		false && true => true
		false && false => false
	*/
	int a = 5, b= 6, c = 7;
	bool d = a > b && b < c;
	cout<<d<<endl;
	return 0;
}
