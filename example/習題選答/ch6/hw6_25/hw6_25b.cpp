// hw6_25b,
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
   if (n==1 || n==2)
      return 1;
   else return fib(n-1)+fib(n-2);
}

/* output-------------------
fib(48)=512559680
--------------------------*/
