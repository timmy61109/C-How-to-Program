#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a = 15, b = 6;
	int c = (a > b ? a - b : b - a);
	cout<<c<<endl;
	return 0;
}
