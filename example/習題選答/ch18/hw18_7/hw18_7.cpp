// hw18_7,
#include <fstream>   // 載入fstream標頭檔
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char txt[40];
    ifstream ifile("c:\\donkey.txt",ios::in);
    if(ifile.is_open())
       while(!ifile.eof())
       {
          ifile >> txt;
          cout << txt << endl;
       }
    else
       cout << "檔案開啟失敗..."  << endl;
   ifile.close();
   
   system("pause");
   return 0;
}

/* output-------------------------------
我有一隻小毛驢
我從來也不騎
--------------------------------------*/
