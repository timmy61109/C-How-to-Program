// prog14_3, 使用動態記憶體配置
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class CWin                      // 定義視窗類別CWin
{
   private:
     char id, *title;          // 宣告title為指向字元陣列的指標	    
     
   public:     
     CWin(char i='D', char *text="Default window"):id(i)
     {
        title=new char[strlen(text)+1];       // 配置記憶體空間
        strcpy(title,text);
     }
     ~CWin()                    // 解構元的原型
     {
        cout << "解構元被呼叫了，Win " << this->id << "被銷毀了.." << endl;
        delete [] title;  	    // 釋放title所指向的記憶體空間
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
   CWin win2('B');
   
   win1.show(); 
   win2.show();
   cout << "sizeof(win1)= " << sizeof(win1) << endl;
   cout << "sizeof(win2)= " << sizeof(win2) << endl;  

   system("pause");
   return 0;
}
