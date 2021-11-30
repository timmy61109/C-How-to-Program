// prog16_4, prog16_3錯誤的修正
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                     // 定義視窗類別CWin
{
   private:
     char id;
     int width,height;
     
   public:     
     CWin(int w,int h):width(w),height(h)  
     {
        cout << "CWin(int w,int h)建構元被呼叫了..." << endl;
        id='K';
     } 
     CWin()
     {
        cout<< "沒有引數的CWin()建構元被呼叫了..." << endl;     
     }    
};

class CTextWin : public CWin   // 定義子類別CTextWin
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
