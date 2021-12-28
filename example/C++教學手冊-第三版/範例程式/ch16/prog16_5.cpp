// prog16_5, 錯誤的例子--存取到父類別裡的私有成員
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                  // 定義父類別CWin
{
   private:
     char id;
 
   public:
     CWin(char i):id(i) {}
};

class CTextWin : public CWin                // 定義子類別CTextWin
{
   private:
      char text[20];
      
   public:
      CTextWin(char i, char *tx):CWin(i)
      {
         strcpy(text,tx);
      }
      void show()
      {
         cout << "Window " << id << ": ";   // 讀取父類別裡的私有成員
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
