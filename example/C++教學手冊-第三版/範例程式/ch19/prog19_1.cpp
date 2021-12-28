//prog19_1, 例外的簡單範例, try-catch區塊的使用 
#include <iostream>   
#include <cstdlib>
using namespace std;
int main(void)
{
   int array[5];
   
   try                                        // try區塊，在此區塊內可進行例外的檢查
   {
      for(int i=0;i<=10;i++)
      {
         if(i>=5)                          	  // 若註標值大於等於5
            throw "Index out of bound";       // 拋出例外
         else 
         {
            array[i]=i*i;
            cout << "array[" << i << "]=" << array[i] << endl;
         }
      }
   }
   catch(const char *str)                     // catch區塊
   {
      cout << "捕捉到" << str << "例外..." << endl;
   }    
   
   system("pause");
   return 0;
}
