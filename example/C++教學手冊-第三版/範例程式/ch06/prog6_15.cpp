// prog6_15, 遞迴函數,計算次方
#include <iostream>
#include <cstdlib>
using namespace std;
int power(int,int);
int main(void)
{
   int a=2,b=3;
   cout << a << "^" << b << "=";
   cout << power(a,b) << endl;    // 印出a^b的結果 
   system("pause");
   return 0;
}

int power(int a,int b)	          // 自訂函數power()，計算a^b
{
   if(b==0)
      return 1;
   else return (a*power(a,b-1));
}
