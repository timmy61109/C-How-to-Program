// prog16_8, 繼承的簡單範例
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                    // 定義CWin類別，在此為父類別
{
   protected:
     char id;
     
   public:
     CWin(char i):id(i){}
     
     void show_member(void)  	              // 父類別的show_member()函數
     {
        cout << "父類別的show_member()函數被呼叫了..." << endl; 
        cout << "Window " << id << endl;
     }
};

class CTextWin : public CWin	              // 定義CTextWin類別，繼承自CWin類別
{
   private:                  	              // 子類別裡的私有成員
      char text[20];
      
   public:     
      CTextWin(char i,char *tx):CWin('i')     // 子類別的建構元
      {
         strcpy(text,tx);
      }
      void show_member()                      // 子類別的show_member()函數
      {
         cout << "子類別的show_member()函數被呼叫了..." << endl; 
         cout << "Window " << id << ": ";         
         cout << "text = " << text << endl;
      }
};

int main(void)
{
   CTextWin txt('A',"Hello C++");		      // 建立子類別的物件
   
   txt.show_member();			              // 以子類別物件呼叫show_member()函數

   system("pause");
   return 0;
}
