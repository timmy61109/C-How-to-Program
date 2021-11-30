//prog20_2, 使用數個名稱空間
#include <iostream>   
#include <cstdlib>

namespace name1             // 設定名稱空間name1
{
   int var=5;
}

namespace name2             // 設定名稱空間name2
{
   int var=10;
}
using namespace std;
int main(void)
{
   cout << "in name1, var= " << name1::var << endl;
   cout << "in name2, var= " << name2::var << endl;
  
   system("pause");
   return 0;
}
