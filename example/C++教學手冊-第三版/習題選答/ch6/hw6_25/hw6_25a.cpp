// hw6_25a,
#include<iostream>
#include<cstdlib>
using namespace std;
int fib(int);
int main(void)
{
   cout << "fib(48)=" << fib(48) << endl;

   system("pause");
   return 0;
}

int fib(int n)
{
   int f_1=1;
   int f_2=1;
   int f=0;
   for(int i=3;i<=n;i++)
   {
      f=f_1+f_2;
      f_2=f_1;
      f_1=f;
   }
   return f;
}

/* output-------------------
fib(48)=512559680
--------------------------*/
