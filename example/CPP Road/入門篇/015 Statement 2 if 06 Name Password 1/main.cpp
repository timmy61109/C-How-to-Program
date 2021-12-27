#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*
	cout<<"Please input your name => ";
	string name;
	cin>>name;
	
	cout<<"Please input your password => ";
	string password;
	cin>>password;
	
	bool answer = false;
	if(name == "abcd"){
		if(password == "1234"){
			answer = true;
		}		
	}
	
	
	if(answer){
		cout<<"Welcome"<<endl;
	}
	if(!answer){
		cout<<"Name or password is wrong."<<endl;
	}
	*/
	/*
	cout<<"Please input your name => ";
	string name;
	cin>>name;
	
	cout<<"Please input your password => ";
	string password;
	cin>>password;
	
	bool answer = true;
	if(name != "abcd"){		
		answer = false;
	}
	if(password != "1234"){
		answer = false;
	}
	
	if(answer){
		cout<<"Welcome"<<endl;
	}
	if(!answer){
		cout<<"Name or password is wrong."<<endl;
	}
	*/
	/* 
	cout<<"Please input your name => ";
	string name;
	cin>>name;
	
	cout<<"Please input your password => ";
	string password;
	cin>>password;
	
	bool answer = false;
	if(name == "abcd" && password == "1234"){
		answer = true;
	}
	
	
	if(answer){
		cout<<"Welcome"<<endl;
	}
	if(!answer){
		cout<<"Name or password is wrong."<<endl;
	}
	*/ 
	
	cout<<"Please input your name => ";
	string name;
	cin>>name;
	
	cout<<"Please input your password => ";
	string password;
	cin>>password;
	
	bool answer = true;
	if(name != "abcd" || password != "1234"){
		answer = false;
	}
	
	if(answer){
		cout<<"Welcome"<<endl;
	}
	if(!answer){
		cout<<"Name or password is wrong."<<endl;
	}
	return 0;
}
