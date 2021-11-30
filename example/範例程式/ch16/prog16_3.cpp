// prog16_3, 呼叫父類別建構元時常犯的錯誤
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                  // 定義視窗類別CWin
{
   private:
     char id;
     int width,height;
     
   public:     
     CWin(int w,int h):width(w),height(h)   // 有兩個引數的建構元
     {
        cout << "CWin(int w,int h)建構元被呼叫了..." << endl;
        id='K';
     } 
};

class CTextWin : public CWin                // 定義子類別CTextWin
{
   private:
      char text[20];
      
   public:
      CTextWin(char *tx) 
      {
         cout << "CTextWin()建構元被呼叫了..." << endl; 
         strcpy(text,tx);
      }      
};

int main(void)
{
   CTextWin tx1("Hello C++");  
   
   system("pause");
   return 0;
}
