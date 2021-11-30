// prog3_4, 字元型態的列印
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char ch='h';			// 定義一個名為ch的字元，其值為h
   int i=ch;
   cout << "ch=" << ch << endl;        			// 印出ch的值
   cout << "The ASCII code is " << i << endl; 	// 印出ASCII值
   system("pause");
   return 0;
}
