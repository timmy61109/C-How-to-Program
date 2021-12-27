//============================================================================
// Name        : 010.cpp
// Author      : 許裕永
// Version     :
// Copyright   : 010 字串 01 字元陣列與字元指標
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;


int main() {
	/*
	char wordA[11];
	char wordB[11] = {'1','2','3'};
	char wordC[11] = "12345";
	char wordD[] = "12345";
	cout<<wordA<<endl;
	cout<<wordB<<endl;
	cout<<wordC<<endl;
	cout<<wordD<<endl;
	*/

	/*
	char * wordA;
	char * wordB = "12345";
	char * wordC = new char[11];
	cout<<wordA<<endl;
	cout<<wordB<<endl;
	cout<<wordC<<endl;
	*/

	// size_t strlen(const char * str)
	//const char * str = "12345";
	//const char * str = new char[5];
	/*
	char wordA[111];
	const char * str = wordA;
	*/
	/*
	char wordA[1111] = "12345";
	const char * str = wordA;
	*/
	char wordA[] = "12345";
	int st = strlen(wordA);
	cout<<st<<endl;

	return 0;
}



























/*declare
	 //宣告字元陣列
	char test1[10] = {'1','2'};
	char test2[10] = "01234567";
	char test3[] = "Hello World!";
	cout<<test1<<"\t"<<test2<<"\t"<<test3<<endl;
	int i[] = {1,2}; //只有字元陣列會顯示內容.
	cout<<i<<endl;
	*/

/*declare
	//宣告字元指標
	char * test;
	char * test2 = "Hello World";
	char * test3 = new char[11];
	cout<<test<<"\t"<<test2<<"\t"<<test3<<endl;
	*/

