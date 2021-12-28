// prog10_8, 指標與參照
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int a=10,&ref=a;				     // 宣告變數a及其參照ref
   int b=15,*ptr;     				 // 宣告變數b及指標ptr
   ptr=&b;             				 // 將ptr指向b
   cout << a << "+" << b << "=";     // 印出a+b的結果
   cout << ref+*ptr << endl;       	 // 利用指標與參照完成

   system("pause");
   return 0;
}
