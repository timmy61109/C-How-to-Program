//prog18_4, 利用put()將字串寫入檔案
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char txt[]="Welcome to the C++ world" ;     // 建立字元陣列
   int i=0;
   
   ofstream ofile("c:\\welcome.txt",ios::out);
   
   while(txt[i] != '\0')  	                   // 判別txt[i]字元是否為字串尾端
   {
      ofile.put(txt[i]);  		               // 將字元txt[i]寫入檔案
      i++; 
   }
   cout << "字串寫入完成..." << endl;
   ofile.close();
  
   system("pause");
   return 0;
}
