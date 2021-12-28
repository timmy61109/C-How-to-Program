// hw5_15,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int i=1,sum=0;
   
   cout << "1~20い案计Τ ";
   while(i<=20)
   {   
      if(i%2==0)
      {         
         cout << i << " ";
         sum+=i*i;
      }
      i++;
   }
   cout << endl;
   cout << "キよぇ㎝" << sum << endl;

   system("pause");
   return 0;
}

/* output----------------------------------
1~20い案计Τ 2 4 6 8 10 12 14 16 18 20
キよぇ㎝1540
-----------------------------------------*/
