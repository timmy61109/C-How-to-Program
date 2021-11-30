//prog20_1, 使用namespace
#include <iostream>   
#include <cstdlib>

namespace name1          // 設定名稱空間name1
{
   int var=5;            // 在名稱空間name1內宣告變數var
}
using namespace std;
int main(void)
{
   int var=10;           // 宣告區域變數var
   
   cout << "in name1, var= " << name1::var << endl;
   cout << "var= " << var << endl;
  
   system("pause");
   return 0;
}
