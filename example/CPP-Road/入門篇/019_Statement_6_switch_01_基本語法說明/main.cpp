#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	cout<<"�п�J�N�� (0~3) =>";
	short a;
	cin>>a;
	
	const int c = 0;
	
	//string b = "��J���~";
	string b;
	a = a % 4; 
	switch(a) {
		case 3:
			{
			int x = 1;			
			b = "�V��";
			break;
			}	
		case c:
			{
			int x = 1;
			b = "�K��";
			break;
			}	
		case c + 1:
			{
			int x = 1;
			b = "�L��";
			break;
			}	
		case c + 2:
			{
			int x = 1;
			b = "���";
			cout<<c<<endl;
			break;
			}			
	}
	cout<<"�{�b�O: "<<b<<endl; 
	return 0;
}
