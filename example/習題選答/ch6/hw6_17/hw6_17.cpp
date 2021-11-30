// hw6_17,
#include <iostream>
#include <cstdlib>
using namespace std;
int total(int);
int main(void)
{ 
   int n=10,addsum;
   for(int i=1;i<=n;i++)  
      addsum=total(i);
   cout << "1+2+...+" << n << "=" << addsum << endl;
   system("pause");
   return 0;
}

int total(int a)
{
   static int sum=0;   
   sum+=a;
   return sum;
}

/* output-----------------
1+2+...+10=55
------------------------*/
