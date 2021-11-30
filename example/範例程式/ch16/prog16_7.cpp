// prog16_7, protected成員的使用
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin          // 定義視窗類別CWin
{
   protected:      
     char id;      // 把id宣告成protected成員，使得它也可以在子類別裡使用
 
   public:
     CWin(char i):id(i) {}
};

class CTextWin : public CWin
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
         cout << "Window " << id << ": ";   // 讀取父類別裡的保護成員
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
