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
	
	int answer = 0;
	if(name != "abcd"){
		answer = 1;
	}
	if(password != "1234"){
		answer = 2;
	}
	
	if(answer == 0){
		cout<<"Welcome"<<endl;
	}
	if(answer == 1){
		cout<<"The name is wrong."<<endl;
	}
	if(answer == 2){
		cout<<"The password is wrong."<<endl;
	}
	*/
	
	cout<<"Please input your name => ";
	string name;
	cin>>name;
	
	cout<<"Please input your password => ";
	string password;
	cin>>password;
	
	int answer = 1;
	if(name == "abcd"){
		if(password == "1234"){
			answer = 0;
		}
		if(password != "1234"){
			answer= 2;
		}
	}
	
	if(answer == 0){
		cout<<"Welcome"<<endl;
	}
	if(answer == 1){
		cout<<"The name is wrong."<<endl;
	}
	if(answer == 2){
		cout<<"The password is wrong."<<endl;
	}
	return 0;
}
/*
	潤年
	1.  必須是4的倍數年
	2. 不可以是100的倍數年
	3. 可以是400的倍數年
*/
