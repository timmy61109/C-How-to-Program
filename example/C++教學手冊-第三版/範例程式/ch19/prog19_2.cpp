//prog19_2, catch區塊的多載
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
         if(i>9)  throw "Index out of bound";  // 拋出字串型態的例外
         if(i*i>60)
            throw i;                           // 拋出整數型態的例外
         else
            array[i]=i*i;
      }
   }
   catch(const char *str)                      // 可捕捉字串型態的例外
   {
      cout << "捕捉到" << str << "例外..." << endl;
   }    
   catch(int i)                                // 可捕捉整數型態的例外
   {
      cout << i << "的平方值超過60了" << endl;
   }       
   
   system("pause");
   return 0;
}
