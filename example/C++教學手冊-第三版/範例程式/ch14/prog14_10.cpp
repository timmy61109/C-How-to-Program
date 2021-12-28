// prog14_10, 錯誤示範，未撰寫拷貝建構元的錯誤
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                    // 定義視窗類別CWin
{
   private:
     char id, *title;
     
   public: 
     CWin(char i='D', char *text="Defaule window"):id(i)  
     {
        cout << "建構元被呼叫了..." << endl;         
        title=new char[strlen(text)+1];       // 配置記憶空間
        strcpy(title,text);
     }
     ~CWin()                                  // 解構元的原型 
     {
        delete [] title;
     }      
     void show()
     {
        cout << "Window " << id << ": " << title << endl;
     }
};

void display(CWin win)                        // 用來呼叫CWin類別裡的show()函數
{
   win.show();
}

int main(void)
{
   CWin *ptr1=new CWin('A',"Main window"); 	

   display(*ptr1); 
   display(*ptr1); 
   
   delete ptr1;
  
   system("pause");
   return 0;
}
