// hw5_13,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int i;   
   cout << "1~100中可同時被7與4整除的數有 ";
   for(i=1;i<=100;i++)
      if(i%7==0 && i%4==0)
         cout << i << " ";
   cout << endl;
   
   system("pause");
   return 0;
}

/* output--------------------------------
1~100中可同時被7與4整除的數有 28 56 84
---------------------------------------*/
