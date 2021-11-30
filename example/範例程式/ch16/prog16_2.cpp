// prog16_2, 設定運算子多載的進階應用
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                              // 定義視窗類別CWin
{
   private:
     char id;
     int width,height;
     
   public: 
     CWin(char i='D',int w=10,int h=10):id(i),width(w),height(h)  
     {
        cout << "CWin()建構元被呼叫了..." << endl;
     }
     CWin(int w,int h):width(w),height(h)  
     {
        cout << "CWin(int w,int h)建構元被呼叫了..." << endl;
        id='K';
     }     
     void show_member(void)  
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

class CTextWin : public CWin
{
   private:
      char text[20];
      
   public:
      CTextWin(int w,int h): CWin(w,h)  // CTextWin(int,int)建構元
      {
         cout << "CTextWin(int w,int h)建構元被呼叫了..." << endl; 
         strcpy(text,"Have a good night");
      }
      CTextWin(char *tx)                // CTextWin(char *)
      {
         cout << "CTextWin(char *tx)建構元被呼叫了..." << endl; 
         strcpy(text,tx);
      }      
      void show_text()
      {
         cout << "text = " << text << endl;
      }
};

int main(void)
{
   CTextWin tx1("Hello C++"); 	        // 呼叫39~43行的CTextWin()建構元
   CTextWin tx2(60,70);		            // 呼叫34~38行的CTextWin()建構元

   tx1.show_member();   
   tx1.show_text();
   
   tx2.show_member();
   tx2.show_text();   
   
   system("pause");
   return 0;
}
