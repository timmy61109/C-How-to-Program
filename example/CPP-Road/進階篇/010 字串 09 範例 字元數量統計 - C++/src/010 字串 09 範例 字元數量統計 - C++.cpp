//============================================================================
// Name        : 010.cpp
// Author      : �\�Υ�
// Version     :
// Copyright   : CPP Road
// Description : 010 �r�� 08 �d�� �r���ƶq�έp - C++
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	char * word = new char[2000];
	cin.getline(word, 2000);
	string sWord(word);
	int a,b,c,d,e;
	a = b = c = d = e = 0;
	for(size_t i = 0 ; i < sWord.size(); i++){
		char x = sWord[i];
		if( x >= 65 && x <= 'Z'){
			a++;
		}else if( x >= 97 && x <= 'z'){
			b++;
		}else if( x >= 48 && x <= '9'){
			c++;
		}else if( x == ' '){
			d++;
		}else{
			e++;
		}
	}
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	return 0;
}
