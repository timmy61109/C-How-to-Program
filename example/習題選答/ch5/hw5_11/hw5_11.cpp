// hw5_11,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int i;

   cout << "1~100中可被18整除的數有 ";
   for(i=1;i<=100;i++)
   {
      if(i%18==0)
         cout << i << " ";
   }
   cout << endl;

   system("pause");
   return 0;
}

/* output--------------------------------
1~100中可被18整除的數有 18 36 54 72 90
---------------------------------------*/
