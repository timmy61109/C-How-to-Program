// prog6_4, 傳回較大值
#include <iostream>
#include <cstdlib>
using namespace std;
int max(int,int);     // 函數原型的宣告
int main(void)
{
   int a=12,b=35;
   cout << "a=" << a << ", b=" << b << endl;	// 印出a,b的值
   cout << "The larger number is " << max(a,b) << endl; // 印出較大值
   system("pause");
   return 0;
}

int max(int i,int j)	  // 自訂的函數max(),傳回較大值 
{
   if (i>j)
      return i;
   else
      return j;
}
