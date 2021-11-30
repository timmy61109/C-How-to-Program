// prog14_2, 固定空間的記憶體配置
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                      // 定義視窗類別CWin
{
   private:
     char id,title[20];

   public:     
     CWin(char i='D', char *text="Default window"):id(i)  
     {
        strcpy(title,text);     // 將text所指向的字串拷貝到title陣列裡
     }
     ~CWin()                    // 解構元
     {
        cout << "解構元被呼叫了，Win " << this->id << "被銷毀了.." << endl;
        system("pause");
     } 
     void show(void)            // 顯示id與title成員
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
