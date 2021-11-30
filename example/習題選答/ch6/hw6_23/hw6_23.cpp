// hw6_23,
#include<iostream>
#include<cstdlib>
using namespace std;
int add(int);
int main(void)
{
   int n=10;
   cout << "1+2+...+" << n << "=" << add(n) << endl;
   
   system("pause");
   return 0;
}

int add(int n)
{
   if(n==1)
      return 1;
   else
      return (n+add(n-1));
}

/* output-------------------
1+2+...+10=55
--------------------------*/
