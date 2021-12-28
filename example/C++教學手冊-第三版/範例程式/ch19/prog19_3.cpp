//prog19_3, 捕捉任何型態的例外 
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
            throw "Index out of range";
         if(i*i>60)
            throw i;
         else
            array[i]=i*i;
      }
   }
   catch(...)            // 可接收任何型態的例外
   {
      cout << "捕捉到例外了..." << endl;
   }    
   
   system("pause");
   return 0;
}
