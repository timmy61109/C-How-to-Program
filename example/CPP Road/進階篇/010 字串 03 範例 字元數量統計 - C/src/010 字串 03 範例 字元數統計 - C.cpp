//============================================================================
// Name        : 010.cpp
// Author      : �\�Υ�
// Version     :
// Copyright   : 010 �r�� 03 �d�� �r���ƶq�έp - C
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	char words[2000];
	//gets(words);
	//puts(words);
	cin.get(words, 2000);

	int upperCount = 0, lowerCount, numberCount, spaceCount, otherCount;
	upperCount = lowerCount = numberCount = spaceCount = otherCount = 0;
	for(size_t i = 0; i < strlen(words); i++){
		if(words[i] >= 'A' && words[i] <= 'Z'){
			upperCount++;
		}else if(words[i] >= 97 && words[i] <= 97+26){
			lowerCount++;
		}else if(words[i] >= '0' && words[i] <= '9'){
			numberCount++;
		}else if(words[i] == ' '){
			spaceCount++;
		}else{
			otherCount++;
		}
	}

	cout<<upperCount<<endl;
	cout<<lowerCount<<endl;
	cout<<numberCount<<endl;
	cout<<spaceCount<<endl;
	cout<<otherCount<<endl;
	cout<<"-------------------"<<endl;
	cout<<strlen(words)<<endl;
	return 0;
}
