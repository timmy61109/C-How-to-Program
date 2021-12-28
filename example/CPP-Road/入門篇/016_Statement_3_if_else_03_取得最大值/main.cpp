#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"請輸入第一個值 => ";
	int a;
	cin>>a;
	 
	cout<<"請輸入第二個值 => ";
	int b;
	cin>>b;	
	
	cout<<"請輸入第三個值 => ";
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
		cout<<"三個值一樣大"<<endl;
	}
	
	return 0;
}
