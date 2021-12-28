//prog18_6, 二進位檔寫入的練習 
#include <fstream> 		// 載入fstream標頭檔
#include <iostream>
#include <cstdlib>
#include <cmath> 		// 載入數學函數庫cmath
using namespace std;
int main(void)
{
   double num;  
   ofstream ofile("c:\\binary.dat",ios::binary);    // 開啟可供寫入的二進位檔
   
   for(int i=1;i<=5;i++)
   {
      num=sqrt((double)i);  // 將i轉成double，再計算sqrt(i)
      ofile.write((char*)&num,sizeof(num));         // 將num寫入二進位檔
   }
   cout << "已將資料寫入二進位檔了..." << endl;
   
   ofile.close();       	// 關閉檔案
   
   system("pause");
   return 0;
}
