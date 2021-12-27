//============================================================================
// Name        : 010.cpp
// Author      : ³\¸Î¥Ã
// Version     :
// Copyright   : CPP Road
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	/*
	string s1 = "Hello World!";
	string* ps1 = new string("I love C++");

	char c = s1.at(0);
	cout<<c<<endl;
	char c2 = ps1->at(0);
	cout<<c2<<endl;
    cout<<s1[0]<<endl;
    cout<<(*ps1)[0]<<endl;

    size_t size = s1.size();
    size_t size2 = ps1->size();
    cout<<size<<endl;
    cout<<size2<<endl;

    for(size_t i = 0;i < s1.size(); i++){
    	cout<<s1[i];
    }

    cout<<endl;
    s1.assign("New String Content");
    *ps1 = "New String Content";
    cout<<s1<<endl;
    cout<<*ps1<<endl;


    s1.append("C++");
    *ps1 += "Java";
    cout<<s1<<endl;
    cout<<*ps1<<endl;

	*/

	/*
	string s1 = "1245";
	s1.append(s1.insert(2, "3"));
	cout<<s1<<endl;

	s1.erase(5, 3);
	cout<<s1<<endl;

	s1.replace(5, 2, "67");
	cout<<s1<<endl;

	size_t st = s1.find("34");
	cout<<st<<endl;

	st = s1.find("88");
	cout<<st<<endl;
	if(st == string::npos){
		cout<<"Not Found."<<endl;
	}
	*/
	/*
	string s1 = "I love Java. Java is good. Java is very Good.";
	string findWord = "Java";
	string replaceWord = "C++";
	size_t startPos = 0;
	do{
		size_t st = s1.find(findWord, startPos);
		if(st == string::npos){
			break;
		}
		s1.replace(st,findWord.size(),replaceWord);
		startPos = st + replaceWord.size();
	}while(true);

	cout<<s1<<endl;
	*/
	/*
	string s1 = "I love Java. Java is good. Java is very Good.";
	size_t st = s1.find_first_of("aeiou");
	cout<<st<<endl;
	*/
	/*
	string s1 = "C,C++,Java";
	string s2 = ",";

	int count = 0;
	size_t startPos = 0;
	do{
		size_t st = s1.find(s2, startPos);
		if(st == string::npos){
			break;
		}
		count++;
		startPos = st + s2.size();
	}while(true);

	string words[count + 1];
	startPos = 0;
	for(int i = 0; i <= count; i++){
		size_t st = s1.find(s2, startPos);
		words[i] = s1.substr(startPos, st - startPos);
		startPos = st + 1;
	}

	for(int i = 0; i <= count; i++){
		cout<<words[i] <<"\t";
	}
	cout<<endl;
	*/
	/*
	string s1 = "I love Java. Java is good. Java is very Good.";
	string s2 = s1.substr(s1.find_first_of("Jj"), 4);
	if(s2 == "Java"){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	*/
	string s1 = "Mary,John,Bob";
	string s2 = ",";
	int count = 0;
	size_t startPos = 0;
	do{
		size_t st = s1.find(s2, startPos);
		if(st == string::npos){
			break;
		}
		count++;
		startPos = st + s2.size();
	}while(true);

	string words[count + 1];
	startPos = 0;
	for(int i = 0; i <= count; i++){
		size_t st = s1.find(s2, startPos);
		words[i] = s1.substr(startPos, st - startPos);
		startPos = st + 1;
	}

	for(int j = 0; j < count; j++){
		int smallestIndex = j;
		for(int i = j + 1; i <= count; i++){
			if(words[smallestIndex].compare(words[i]) > 0){
				smallestIndex = i;
			}
		}
		string temp = words[j];
		words[j] = words[smallestIndex];
		words[smallestIndex] = temp;
	}
	for(int i = 0; i <= count; i++){
		cout<<words[i] <<"\t";
	}
	cout<<endl;


	return 0;
}

