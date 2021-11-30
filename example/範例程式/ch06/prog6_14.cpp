// prog6_14, 遞迴函數,計算階乘
#include <iostream>
#include <cstdlib>
using namespace std;
int fact(int);
int main(void)
{
   int a;
   do	
   {
      cout << "Input an integer:";
      cin >> a;
   } while (a<=0); 	     // 確定輸入的a為大於0的數 
   cout << "1*2*...*" << a << "=" << fact(a) << endl;
   system("pause");
   return 0;
}

int fact(int a)		     // 自訂函數fact()，計算a!
{
   if(a>0)
      return (a*fact(a-1));
   else
      return 1;
}
