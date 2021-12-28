//============================================================================
// Name        : 010.cpp
// Author      : ³\¸Î¥Ã
// Version     :
// Copyright   : CPP Road
// Description : 010 ¦r¦ê 10  ½d¨Ò µn¤J - C++
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string name , password;
	int count = 1;
	bool login = false;
	do{
		cout<<"Please input your name =>";
		cin>>name;
		cout<<"Please input your password =>";
		cin>>password;
		if(name.compare("abcd") == 0 && password == "1234"){
			cout<<"Welcome"<<endl;
			login = true;
			break;
		}else{
			if(count <= 2){
				cout<<"Name or password is wrong."<<endl;
				count++;
			}else{
				cout<<"Over three times."<<endl;
				break;
				//return 0;
			}
		}
	}while(!login);

	if(login){
		cout<<"do Something"<<endl;
	}else{
		cout<<"bye bye."<<endl;
	}

	return 0;
}
