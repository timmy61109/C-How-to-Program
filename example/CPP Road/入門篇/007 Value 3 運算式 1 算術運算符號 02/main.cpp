#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"�п�J�@�Ӿ�� => ";
	int a;
	cin>>a;
	
	cout<<"�п�J�t�@�Ӿ�� => " ;
	int b;
	cin>>b;
	
	int c = a % b;
	
	if(c == 0){
		cout<<a<< " �O " <<b<<" ������"<<endl; 
	}else{
		cout<<a<< " ���O " <<b<<" ������"<<endl; 
	}
	return 0;
}
