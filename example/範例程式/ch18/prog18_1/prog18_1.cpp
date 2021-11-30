//prog18_1, 將資料寫入文字檔  
#include <fstream>   // 載入fstream標頭檔
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   ofstream ofile("c:\\donkey.txt",ios::out);  // 建立ofile物件
   
   if(ofile.is_open())                         // 測試檔案是否被開啟
   {
      ofile << "我有一隻小毛驢" << endl;       // 將字串寫入檔案
      ofile << "我從來也不騎" << endl;         // 將字串寫入檔案       
      cout << "已將字串寫入檔案..." << endl; 
   }
   else 
      cout << "檔案開啟失敗..."  << endl; 
   
   ofile.close();                              // 關閉檔案
  
   system("pause");
   return 0;
}
