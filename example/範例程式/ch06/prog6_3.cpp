// prog6_3, 呼叫自訂函數
#include <iostream>
#include <cstdlib>
using namespace std;
void func(int,int);     	// 函數原型的宣告 
int main(void)
{
   int a=3,b=6;
   cout << "In main(),a=" << a << ",b=" << b << endl; // 印出a,b的值
   func(a,b);
   cout << "After func(),a=" << a << ",b=" << b << endl;
   
   system("pause");
   return 0;
}

void func(int a,int b)	// 自訂的函數func()，印出a,b的值 
{
   a+=10;
   b+=10;
   cout << "In func(),a=" << a << ",b=" << b << endl;
   return;
}
