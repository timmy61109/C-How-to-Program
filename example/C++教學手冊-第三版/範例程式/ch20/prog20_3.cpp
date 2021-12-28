//prog20_3, 使用using關鍵字
#include <iostream>   
#include <cstdlib>

namespace name1    		                              // 設定名稱空間name1
{
   int var=5;
}

using namespace name1;	                              // 設定此行以下的程式碼均使用name1名稱空間
using namespace std; 	                              // 設定此行以下的程式碼也使用std名稱空間
int main(void)
{
   cout << "var= " << var << endl;                    // 印出name1名稱空間內var的值

   int var=10;     		                              // 設定區域變數var
   cout << "main()裡的變數 var= " << var << endl;     // 印出區域變數var的值

   cout << "name1::var= " << name1::var << endl;      // 印出name1內var的值

   system("pause");
   return 0;
}
