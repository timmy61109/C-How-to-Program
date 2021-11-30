// hw6_7,
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
bool primeQ(int);
int main(void)
{
   for(int i=2;i<=100;i++)
      if(primeQ(i))
   	     cout << i << " ";
      cout << endl;

   system("pause");
   return 0;
}

bool primeQ(int num)
{
   for(int i=2;i<sqrt((double)num+1);i++)
      if(num%i==0)
         return false;
   return true;
}

/* output---------------------------------------------------------------
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
----------------------------------------------------------------------*/
