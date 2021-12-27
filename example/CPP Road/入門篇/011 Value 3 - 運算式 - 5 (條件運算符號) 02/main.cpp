#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*
	int a = 5, b = 6, c = 7;
	bool d = ++a >= b-- && --b >= c--;
	//++a >= b--
	// a = a + 1 => a = 6
	// a >= b => true
	// b = b -1 => b = 5
	
	//--b >= c--
	// b = b - 1 => b = 4
	// b >= c => false
	// c = c - 1 => c = 6
	
	// true && false => false 
		
	cout<<"a = "<< a <<endl;
	cout<<"b = "<< b <<endl; 
	cout<<"c = "<< c <<endl; 
	cout<<"d = "<< d <<endl;
	*/
	
	/*
	int a = 5, b = 6, c = 7;
	bool d = ++a > b-- && --b >= c--;
	//++a >= b--
	// a = a + 1 => a = 6
	// a > b => false
	// b = b -1 => b = 5
	
	
	// false &&  => false 
		
	cout<<"a = "<< a <<endl;
	cout<<"b = "<< b <<endl; 
	cout<<"c = "<< c <<endl; 
	cout<<"d = "<< d <<endl;
	*/
	
	cout<<"Please input a number => ";
	int number;
	cin>>number;
	if(number != 0 && 10000 / number > 10){
		cout<<"Hi"<<endl;
	}else{
		cout<<"Hello"<<endl;
	}
	
	
	return 0;
}
