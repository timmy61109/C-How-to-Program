//============================================================================
// Name        : 010.cpp
// Author      : ³\¸Î¥Ã
// Version     :
// Copyright   : CPP Road
// Description : string in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1;
	s1 = "abcd";
	string s2 = "ghij";
	string s3("klmn");
	cout<<s1<<" "<<s2<<" "<<s3<<endl;

	string * ps1;
	ps1 = & s1;
	string * ps2 = new string;
	*ps2 = "xyz";
	string * ps3 = new string("stu");
	cout<<*ps1<<" "<<*ps2<<" "<<*ps3<<endl;
	*ps1 = "pqr";
	cout<<s1<<endl;

	return 0;
}
