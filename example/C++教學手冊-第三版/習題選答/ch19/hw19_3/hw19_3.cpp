// hw19_3,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int array[10];

   try
   {
      for(int i=0;i<=10;i++)
      {
         if(i>9)
            throw "Index out of bound";  // 拋出字串型態的例外
         if(i*5.0>16.0)
            throw i*5.0;
         if(i*i>60)
            throw i;            // 拋出整數型態的例外
         else
            array[i]=i*i;
      }
   }
   catch(const char *str)    // 可捕捉字串型態的例外
   {
      cout << "捕捉到" << str << "例外..." <<endl;
   }
   catch(int i)                // 可捕捉整數型態的例外
   {
      cout << i << "的平方值超過60了" << endl;
   }
   catch(double d)                // 可捕捉double型態的例外
   {
      cout << d << "大於16.0了" << endl;
   }

   system("pause");
   return 0;
}

/* output--------------------------------
20大於16.0了
---------------------------------------*/
