// prog4_3, 除法運算子「/」
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int a=16; 	           // 宣告int變數a,並設值為16
   int b=7;  	           // 宣告int變數b,並設值為7
   cout << "a=" << a << ",b=" << b << endl;		// 印出a與b的值
   cout << "a/b=" << a/b << endl;      		   	// 印出a/b的值
   cout << "a/b=" << (float)a/b << endl;        // 印出(float)a/b的值
   system("pause");
   return 0;
}
