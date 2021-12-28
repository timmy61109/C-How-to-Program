// prog16_6, prog16_5的修正版
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                      // 定義父類別CWin
{
   private:
     char id;
     
   public:     
     CWin(char i):id(i) {}
     
     char get_id()		        // get_id()函數，用來取得id成員
     {
        return id;
     }
};

class CTextWin : public CWin    // 定義子類別CTextWin
{
   private:
      char text[20];
      
   public:
      CTextWin(char i,char *tx):CWin(i)
      {
         strcpy(text,tx);
      }
      void show()
      {
         cout << "Window " << get_id() << ": ";       // 呼叫父類別裡的get_id()
         cout << "text = " << text << endl;
      }
};

int main(void)
{
   CTextWin txt('A',"Hello C++");
  
   txt.show();
   
   system("pause");
   return 0;
}
