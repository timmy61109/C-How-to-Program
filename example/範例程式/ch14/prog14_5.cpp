// prog14_5, 使用動態記憶體配置
#include <iostream>
#include <cstdlib>
using namespace std;

class CWin                               // 定義視窗類別CWin
{
   private:
     char id, *title;   	             // 宣告title為指向字元陣列的指標

   public:     
     CWin(char i='D', char *text="Default window"):id(i)
     {
        title=new char[strlen(text)+1];  // 配置記憶體空間
        strcpy(title,text);
     }
     ~CWin()                             // 解構元的原型
     {
        cout << "解構元被呼叫了，Win " << this->id << "被銷毀了.." << endl;
        delete [] title;  	             // 釋放title所指向的記憶體空間
        system("pause");
     }
     void show(void)
     {
        cout << "Window " << id << ": " << title << endl;
     }
};

int main(void)
{
   CWin win1('A',"Main window"); 	
   CWin *ptr;
   ptr=new CWin('B'); 	 
   
   win1.show(); 
   ptr->show();

   system("pause");
   
   delete ptr;                           // 釋放ptr所指向物件之記憶體
   
   return 0;
}
