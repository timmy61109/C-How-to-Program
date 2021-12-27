//============================================================================
// Name        : 010.cpp
// Author      : ³\¸Î¥Ã
// Version     :
// Copyright   : CPP Road
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	char * id = new char[11];
	scanf("%s", id);

	int result = 1;
	if(strlen(id) != 10){
		result = 0;
	}else if(id[0] < 'A' || id[0] >  'Z'){
		result = 0;
	}else if(id[1] != '1' && id[1] != '2'){
		result = 0;
	}else{
		for(size_t i = 2; i < strlen(id); i++){
			if(id[i] < '0' || id[i] > '9'){
				result = 0;
				break;
			}
		}
	}

	if(result){
		char words[] = "ABCDEFGHJKLMNPQRSTUVXYWZIO";
		int index = 0;
		for(size_t i = 0; i < strlen(words); i++){
			if(id[0] == words[i]){
				index = i;
				break;
			}
		}
		index += 10;

		char temp[3];
		sprintf(temp, "%d", index);

		char * newId = new char[12];
		strcpy(newId, temp);
		strcat(newId, id+1);

		int total = 0;
		total = (newId[0] - 48) * 1;
		total += (newId[10] - 48) * 1;
		for(int i = 1; i <= 9; i++){
			total += (newId[i] - 48) * (10 - i);
		}

		if(total % 10 != 0){
			result = 0;
		}
	}



	if(result){
		printf("Correct");
	}else{
		printf("Wrong");
	}
	return 0;
}
