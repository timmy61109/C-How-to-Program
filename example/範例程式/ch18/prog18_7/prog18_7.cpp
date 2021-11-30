//prog18_7, 讀取二進位檔
#include <fstream>   			                  // 載入fstream標頭檔
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   ifstream ifile("c:\\binary.dat",ios::binary);  // 開啟二進位檔
   double num;
   
   for(int i=1;i<=5;i++)
   {
      ifile.read((char*) &num,sizeof(num));       // 從二進位檔中讀取資料
      cout << num << endl;   	                  // 印出讀取的內容
   }   
   cout << "二進位檔已被讀取了..." << endl; 
   
   ifile.close();       		                  // 關閉檔案  
   system("pause");
   return 0;
}
