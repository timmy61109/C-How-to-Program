#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {	
	
	cout<<"�п�J�@�ӼƦr=> ";
	int number;
	cin>>number;
	
	int a = 2;
	if(number % 2  == 1){
		a = 1;
	}else{
		if(number == 0){
			a = 0;
		}
	}		
	
	
	if(a == 0){
		cout<<"�s"<<endl;		
	}else{
		if(a == 1){
			cout<<"�_��"<<endl;
		}else{
			cout<<"����"<<endl;			
		}			
	}
		
	
	return 0;
}
