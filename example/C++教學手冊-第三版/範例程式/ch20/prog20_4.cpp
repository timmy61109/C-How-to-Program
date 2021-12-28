//prog20_4, 在區塊內使用不同的名稱空間
#include <iostream>   
#include <cstdlib>

namespace name1                        // 設定名稱空間name1
{
   int var=5;
}

namespace name2                        // 設定名稱空間name2
{
   int var=10;
}
using namespace std;
int main(void)
{
   {  
      using namespace name1;           // 使用名稱空間name1
      cout << "in namespace name1: ";
      cout << "var= " << var << endl;
   }

   {
      using namespace name2;           // 使用名稱空間name2
      cout << "in namespace name2: ";   
      cout << "var= " << var << endl;
   }   
   
   system("pause");
   return 0;
}
