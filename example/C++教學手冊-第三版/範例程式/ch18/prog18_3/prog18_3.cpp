//prog18_3, 從檔案讀入資料 
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char txt[40];    			// 建立字元陣列，用來接收字串
   ifstream ifile("c:\\donkey.txt",ios::in);
   
   while(!ifile.eof())		    // 判別是否讀到檔案的尾端
   {
      ifile >> txt;       		// 將檔案內容寫入字元陣列
      cout << txt << endl; 
   }
   
   ifile.close();			    // 關閉檔案
   system("pause");
   return 0;
}
