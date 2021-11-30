// hw19_5,
#include <iostream>
#include <cstdlib>
using namespace std;
int fact(int);
int main(void)
{
   int num;
   cout << "Input an integer: ";
   cin >> num;

   if(fact(num)!=-1)
     cout << "fact(" << num << ")=" << fact(num) << endl;
   else
     cout << "input error" << endl;

   system("pause");
   return 0;
}

int fact(int n)
{
   int prd=1;
   double prdf=1.0;
   try
   {
      if(n<0)  throw "argument out of bound";  // 拋出字串型態的例外
      for(int i=1;i<=n;i++)
      {
         if(n==0)
            return 1;
         else if(prdf>2147483647.)
            throw "number too large";  // 拋出字串型態的例外
         else
         {
            prdf=prdf*i;
            prd=prd*i;
         }
      }
   }
   catch(const char *str)    // 可捕捉字串型態的例外
   {
      cout << "捕捉到" << str << "例外..." << endl;
      return -1;
   }
    return prd;
}

/* output--------------------------------
Input an integer: 100
捕捉到number too large例外...
input error
---------------------------------------*/
