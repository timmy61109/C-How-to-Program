// hw18_11a,
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
   CStudent st[3];   
   st[0].get_data();
   st[1].get_data();
   st[2].get_data();
   ofstream ofile("c:\\student.dat",ios::binary|ios::app);
      
   ofile.write((char*) &st[0],sizeof(st[0]));   // 將物件寫入二進位檔中
   ofile.write((char*) &st[1],sizeof(st[1]));   // 將物件寫入二進位檔中
   ofile.write((char*) &st[2],sizeof(st[2]));   // 將物件寫入二進位檔中
   cout<< "資料已寫入檔案中..."<<endl;

   ofile.close();       // 關閉檔案
   system("pause");
   return 0;
}

/* output-------------------------------
Enter name: Alice
Enter age: 18
Enter name: Tippi
Enter age: 16
Enter name: Jack
Enter age: 17
資料已寫入檔案中...
--------------------------------------*/
