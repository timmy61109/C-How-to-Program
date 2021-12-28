// hw18_11b,
#include <fstream>   // 載入fstream標頭檔
#include <iostream>
#include <cstdlib>
using namespace std;
class CStudent
{
   protected:
      char name[40];
      int age;
   public:
      void get_data(void)   // 成員函數，用來輸入物件的資料成員
      {
         cout << "Enter name: "; cin >> name;
         cout << "Enter age: "; cin >> age;
      }
      void show_data(void)   // 成員函數，用來顯示物件的資料成員
      {
         cout << "Name: " << name << endl;
         cout << "Age: "  << age << endl;
      }
};

int main(void)
{
   ifstream ifile("c:\\student.dat",ios::binary);  // 開啟二進位檔
   CStudent st;
   if(ifile.is_open())
   {
      ifile.read((char*) &st,sizeof(st));
      while(!ifile.eof())
      {
         st.show_data();
         ifile.read((char*) &st,sizeof(st));  // 從二進位檔中讀取資料
      }
      cout << "二進位檔已被讀取了..." << endl;
   }
   else
      cout << "檔案開啟失敗..." << endl;

   ifile.close();       // 關閉檔案
   system("pause");
   return 0;
}

/* output-------------------------------
Name: Alice
Age: 18
Name: Tippi
Age: 16
Name: Jack
Age: 17
二進位檔已被讀取了...
--------------------------------------*/
