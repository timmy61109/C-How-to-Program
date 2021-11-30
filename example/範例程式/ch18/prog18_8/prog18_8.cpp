//prog18_8, 將物件的內容寫入二進位檔  
#include <fstream>   		          // 載入fstream標頭檔
#include <iostream>
#include <cstdlib>
using namespace std;
class CStudent
{
   protected:
      char name[40];
      int age;
   public:
      void get_data(void)   	      // 成員函數，用來輸入物件的資料成員
      {
         cout << "Enter name: "; cin >> name;
         cout << "Enter age: "; cin >> age;  
      }
      void show_data(void)   	     // 成員函數，用來顯示物件的資料成員
      {
         cout << "Name: " << name << endl;
         cout << "Age: "  << age << endl;  
      }            
};

int main(void)
{
   CStudent st;    
   st.get_data();
      
   ofstream ofile("c:\\student.dat",ios::binary);
   
   ofile.write((char*) &st,sizeof(st));          // 將物件寫入二進位檔中
   cout << "資料已寫入檔案中..." << endl;
   
   ofile.close();       		     // 關閉檔案
   system("pause");
   return 0;
}
