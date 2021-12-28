#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	cout<<"請輸入代號 (0~3) =>";
	short a;
	cin>>a;
	
	const int c = 0;
	
	//string b = "輸入錯誤";
	string b;
	a = a % 4; 
	switch(a) {
		case 3:
			{
			int x = 1;			
			b = "冬天";
			break;
			}	
		case c:
			{
			int x = 1;
			b = "春天";
			break;
			}	
		case c + 1:
			{
			int x = 1;
			b = "夏天";
			break;
			}	
		case c + 2:
			{
			int x = 1;
			b = "秋天";
			cout<<c<<endl;
			break;
			}			
	}
	cout<<"現在是: "<<b<<endl; 
	return 0;
}
