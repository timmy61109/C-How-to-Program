//prog18_2, 將資料附加到已存在的文字檔  
#include <fstream>                              // 載入fstream標頭檔
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   ofstream afile("c:\\donkey.txt",ios::app);   // 建立afile物件
   
   if(afile.is_open())                          // 測試檔案是否被開啟
   {
      afile << "有一天我心血來潮騎著去趕集";    // 將字串寫入檔案

      cout << "已將字串附加到檔案了..." <<endl; 
   }
   else 
      cout << "檔案開啟失敗..."  << endl; 
   
   afile.close();                               // 關閉檔案
  
   system("pause");
   return 0;
}
