// prog14_9, 自行撰寫拷貝建構元
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                       // 定義視窗類別CWin
{
   private:
     char id, *title;
     
   public:     
     CWin(char i='D', char *text="Default window"):id(i)  
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
     void show(void)
     {
        cout << "Window " << id << ": " << title << endl;
     }
};

int main(void)
{
   CWin *ptr1=new CWin('A',"Main window"); 	
   CWin *ptr2=new CWin(*ptr1); 	 
   
   ptr1->show(); 
   ptr2->show();
   
   delete ptr1;
   cout << "將ptr1所指向的物件刪除後..." << endl; 
   ptr2->show(); 
   
   delete ptr2;
   system("pause");
   return 0;
}
