// prog14_11, 加入拷貝建構元來修正錯誤
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                       // 定義視窗類別CWin
{
   private:
     char id, *title;
     
   public:     
     CWin(char i='D', char *text="Defaule window"):id(i)  
     {
        cout << "建構元被呼叫了..." << endl; 
        title=new char[strlen(text)+1];          // 配置記憶空間
        strcpy(title,text);
     }
     CWin(const CWin &win)  
     {
        cout << "拷貝建構元被呼叫了..." << endl;         
        id=win.id;
        title=new char[strlen(win.title)+1];     // 配置記憶空間
        strcpy(title,win.title);
     }     
     ~CWin()                                     // 解構元的原型 
     {
        delete [] title;
     }      
     void show()
     {
        cout << "Window " << id << ": " << title << endl;
     }
};

void display(CWin win)
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
