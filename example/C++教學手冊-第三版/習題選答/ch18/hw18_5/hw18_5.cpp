// hw18_5,
#include <fstream>   // 載入fstream標頭檔
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   ofstream ofile; // 建立ofile物件
   ofile.open("c:\\donkey.txt",ios::out);

   if(ofile.is_open())   // 測試檔案是否被開啟
   {
      ofile << "我有一隻小毛驢" << endl;
      ofile << "我從來也不騎" << endl;
      cout << "已將字串寫入檔案..." << endl;
   }
   else
      cout << "檔案開啟失敗..."  << endl;

   ofile.close();       // 關閉檔案

   system("pause");
   return 0;
}

/* output-------------------------------
已將字串寫入檔案...
--------------------------------------*/
