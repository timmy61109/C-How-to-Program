#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"�п�H�N�� (0~3) =>";
	char a; 
	cin>>a;
	
	string b = "��J���~"; 
	switch(a){
		case 48:
			b = "�K��"; 
			break;
		case '1':
			b = "�L��"; 
			break;
		case '2':
			b = "���"; 
			break;
		case '3':
			b = "�V��"; 
			break;
	}
	
	cout<<"�{�b�O:"<<b<<endl; 
	return 0;
}
