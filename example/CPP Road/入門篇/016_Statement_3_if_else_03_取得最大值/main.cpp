#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"�п�J�Ĥ@�ӭ� => ";
	int a;
	cin>>a;
	 
	cout<<"�п�J�ĤG�ӭ� => ";
	int b;
	cin>>b;	
	
	cout<<"�п�J�ĤT�ӭ� => ";
	int c;
	cin>>c;	
	
	int x = a;
	
	if(x < b ){
		x = b;
	}
	if(x < c){
		x = c;
	}
	if( a == b && b == c){
		x = 0;
	}
	
	if(x != 0){
		cout<<x<<endl;
	}else{
		cout<<"�T�ӭȤ@�ˤj"<<endl;
	}
	
	return 0;
}
