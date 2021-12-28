// hw5_21,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int i,n=45;
   bool flag=false;
   int prime=n-1;
   while(!flag)
   {
      for(i=2;i<prime;i++)
         if(prime%i==0)   // not a prime
         {  
            prime--;
            continue;
         }
      flag=true;
   }
   cout << "" << n << "程借计" << prime << endl;

   system("pause");
   return 0;
}

/* output----------------
45程借计43
-----------------------*/
