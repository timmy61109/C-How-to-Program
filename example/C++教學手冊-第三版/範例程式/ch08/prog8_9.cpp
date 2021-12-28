// prog8_9, 印出變數的位址
#include <iostream>
#include <cstdlib>
using namespace std;
void func(int);           // 宣告函數原型
int main(void)
{
   int a=13;
   cout << "In main(),a=" << a << ",address=" << &a << endl;
   func(a);
   system("pause");
   return 0;
}

void func(int a)	      // 自訂函數func()
{	
   cout << "In func(),a=" << a << ",address=" << &a << endl;
   return;
}
