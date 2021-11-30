// prog6_13, 相互呼叫函數
#include <iostream>
#include <cstdlib>
using namespace std;
void sum(int),fact(int);
int main(void)
{
   int a=5;
   fact(a);
   sum(a+5);
   system("pause");
   return 0;
}

void fact(int a)	     // 自訂函數fact()，計算a!
{
   int i,total=1;
   for(i=1;i<=a;i++)
      total*=i;
   cout << "1*2*...*" << a << "=" << total << endl;     //印出a!的結果
   sum(a);
   return;
}

void sum(int a)	         // 自訂函數sum()，計算1+2+...+a的結果
{
   int i,sum=0;
   for(i=1;i<=a;i++)
      sum+=i;
   cout << "1+2+...+" << a << "=" << sum << endl;       //印出計算結果
   return;
}
