//============================================================================
// Name        : 010.cpp
// Author      : 許裕永
// Version     :
// Copyright   : CPP Road
// Description : 010 字串 08 使用 string 標頭檔中的函式
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	/*
	string s1 = "111aa222ab333";
	size_t st = 0;
	int x = stoi(s1,&st);
	int y = stoi(s1.substr(st + 2),&st);
	cout<<x + y<<endl;
	*/

	string s2 = to_string(123);
	cout<<s2<<endl;
	string s3 = "" + 123;
	cout<<s3<<endl;
	return 0;
}


