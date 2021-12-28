//prog18_9, 從二進位檔裡讀取物件的資料
#include <fstream>   			// 載入fstream標頭檔
#include <iostream>
#include <cstdlib>
using namespace std;
class CStudent
{
   protected:
      char name[40];
      int age;
   public:
      void get_data(void)    	// 成員函數，用來輸入物件的資料成員
      {
         cout << "Enter name: "; cin >> name;
         cout << "Enter age: ";  cin >> age;  
      }
      void show_data(void)		// 成員函數，用來顯示物件的資料成員
      {
         cout << "Name: " << name << endl;
         cout << "Age: "  << age << endl;  
      }            
};

int main(void)
{
   CStudent st;
      
   ifstream ifile("c:\\student.dat",ios::binary);
   
   ifile.read((char*) &st,sizeof(st));
   st.show_data();
   
   ifile.close();       		// 關閉檔案

   system("pause");
   return 0;
}
