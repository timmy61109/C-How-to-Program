
//============================================================================
// Name        : 010.cpp
// Author      : ³\¸Î¥Ã
// Version     :
// Copyright   : 010 ¦r¦ê 04 µn¤J - C
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int i;
	for(i = 1; i <= 3; i++){
		char *name = new char[10];
		char *password = new char[10];

		scanf("%s", name);
		scanf("%s", password);

		// 0 -> Welcome
		// 1 -> Name Wrong
		// 2 -> Password Wrong
		int result = 0;
		if(strcmp(name, "abcd") != 0){
			result = 1;
		}else if(strcmp(password, "1234") != 0){
			result = 2;
		}

		if(result == 0){
			printf("%s\n", "Welcome");
			break;
		}else if(result == 1){
			printf("%s\n", "Name is wrong");
		}else{
			printf("%s\n", "Password is wrong");
		}
	}
	if(i == 4){
		printf("%s\n", "Over three times");
	}
	return 0;
}
