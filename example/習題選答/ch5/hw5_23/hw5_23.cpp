// hw5_23,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i,num=23;
   bool flag=false;
   for(i=2;i<num;i++)
      if(num%i==0)
      {
         flag=true;
         break;
      }
   if(flag==false)
      cout << num << "是質數" << endl;
   else
      cout << num << "不是質數" << endl;

   system("pause");
   return 0;
}

/* output------
23是質數
-------------*/
