#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"請輸人代號 (0~3) =>";
	char a; 
	cin>>a;
	
	string b = "輸入錯誤"; 
	switch(a){
		case 48:
			b = "春天"; 
			break;
		case '1':
			b = "夏天"; 
			break;
		case '2':
			b = "秋天"; 
			break;
		case '3':
			b = "冬天"; 
			break;
	}
	
	cout<<"現在是:"<<b<<endl; 
	return 0;
}
