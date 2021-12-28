//============================================================================
// Name        : 010.cpp
// Author      : 許裕永
// Version     :
// Copyright   : 010 字串 02 使用cstring中的函式
// Description : 使用cstring中的函式
//============================================================================

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main() {

	// char * strcpy ( char * destination, const char * source );
	//char * dest1 = "12345";
	//char * dest2 = new char[11];
	//char temp[11];
	//char * dest3 = temp;
	//char * dest4 = dest2;

	//const char * sou1 = "12345";
	//const char * sou2 = new char[11];
	//char temp2[11];
	//const char * sou3 = temp2;
	//const char * sou4 = sou2;

	/*
	char wordA[11];
	strcpy(wordA, "12345");
	cout<<wordA<<endl;

	char * wordB = new char[11];
	strcpy(wordB, "12345");
	cout<<wordB<<endl;

	strcpy(wordA,"1234567890");
	strcpy(wordB,"1234567890");
	cout<<wordA<<endl;
	cout<<wordB<<endl;


	//strcpy(wordA,"1234567890123");
	wordB = new char[15];
	strcpy(wordB,"1234567890123");
	//cout<<wordA<<endl;
	cout<<wordB<<endl;

	char * wordC = new char[20];
	cout<<strlen(strcpy(wordC, wordB))<<endl;

	cout<<"-------------------------"<<endl;

	char * wordX = new char[21];
	strcpy(wordX, "12345");
	strcpy(wordX + 3, "67890" + 3);
	cout<<wordX<<endl;

	char *wordY = new char[21];
	strcpy(wordY, "Hi, I am Mary");
	char newName[]= "John";
	strcpy(wordY + strlen(wordY) - strlen(newName), newName);
	cout<<wordY<<endl;
	*/

	/*
	//void Pointer
	void * pv;
	int a = 9700;
	pv = &a;
	cout<<pv<<endl;
	cout<<*(int*)pv<<endl;

	char b = 'a';
	pv = &b;
	cout<<pv<<endl;


	cout<<*(char*)pv<<endl;

	int * pz = new int;
	*pz = 123;
	pv = pz;
	cout<<*(int*)pv<<endl;
	*/

	/*
	//void * memcpy ( void * destination, const void * source, size_t num );

	char wordA[] = "123456789";
	char wordB[] = "abcde";
	//strcpy(wordA, wordB);
	char * temp = (char*)memcpy(wordA + 3, wordB + 2, 3);
	cout<<temp<<endl;
	cout<<wordA<<endl;

	memcpy(wordA + 3, wordA + 6, 3);
	cout<<wordA<<endl;

	int z = 97;
	memcpy(wordA, &z, 1);
	cout<<wordA<<endl;
	memcpy(&z, wordA + 1, 1);
	cout<<z<<endl;
	*/

	/*
	//char * strcat ( char * destination, const char * source );
	char wordA[] = "12345";
	cout<<strcat(wordA, "67890")<<endl;
	*/

	/*
	//int strcmp ( const char * str1, const char * str2 );
	char wordA[] = "abcde";
	char wordB[] = "abcde";
	int i = strcmp(wordA, wordB);
	cout<<i<<endl;
	*/

	/*
	//const char * strstr ( const char * str1, const char * str2 );
	char wordA[] = "123456789";
	char * pc = strstr(wordA, "456");
	cout<<pc<<endl;
	//strcpy(pc,"999999");
	//cout<<wordA<<endl;

	cout<<strcmp(strstr(wordA,"456"),"456789")<<endl;
	*/

	/*
	//char * strtok ( char * str, const char * delimiters );
	char wordA[] = "abc,def,ghi,jkl,mno";
	char * pWordA = new char[strlen(wordA)];
	strcpy(pWordA, wordA);
	char * tok = strtok(pWordA, ",");
	while(tok != NULL){
		cout<<tok<<endl;
		tok = strtok(NULL,",");
	}
	cout<<wordA<<endl;
	*/

	/*
	char * wordA = new char[10];
	gets(wordA);
	puts(wordA);
	*/


	return 0;
}

