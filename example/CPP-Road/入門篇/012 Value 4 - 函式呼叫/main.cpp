#include <iostream>
#include <cmath>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"�п�J���@��� => ";
	int number;
	cin>>number; 
	
	double answer = sqrt(number);
	cout<<number<<"������ڬ�:"<<answer<<endl;
	
	if(sqrt(number) > 10) {
		cout<<"�����Ȥj��10"<<endl; 
	}
	
	return 0;
}
