#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/* 
	cout<<"�п�J���N��� => ";
	int a;
	cin>>a;
	
	cout<<"�п�J���N��� => ";
	int b;
	cin>>b;
	
	int c = 0;
	if(a > b){
		c = 1;
	}
	if(a < b){
		c = 2;
	}
	
	if(c == 0){
		cout<<"��Ӥ@�ˤj"<<endl; 
	}
	if(c == 1){
		cout<<"�Ĥ@�Ӥ���j"<<endl; 
	}
	if(c == 2){
		cout<<"�ĤG�Ӥ���j"<<endl; 
	}
	*/ 
	
	
	cout<<"�п�J���N��� => ";
	int a;
	cin>>a;
	
	cout<<"�п�J���N��� => ";
	int b;
	cin>>b;
	
	
	cout<<"�п�J���N��� => ";
	int c;
	cin>>c;	
	
	cout<<"�п�J���N��� => ";
	int d;
	cin>>d;
	
	int value = a;
	int e = 1;
	if(value < b){
		value = b;
		e = 2;
	}
	if(value < c){
		value = c;
		e = 3;
	}
	if(value < d){
		value = d;
		e = 4;
	}
	if(a == b && b == c && c == d){
		e = 0;
	}
	
	if(e == 0){
		cout<<"�����@�ˤj"<<endl; 
	}
	if(e != 0){
		cout<<"�� "<< e <<" �Ӥ���j"<<endl; 
	}
	return 0;
}
