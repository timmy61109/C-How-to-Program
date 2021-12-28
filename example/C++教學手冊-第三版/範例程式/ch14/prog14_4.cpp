// prog14_4, 使用動態記憶體配置, 錯誤的示範
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
   CWin *ptr;  			                 // 宣告ptr為指向CWin物件的指標
   ptr=new CWin('B'); 	                 // 建立新的物件，並讓ptr指向它
   
   win1.show(); 			             // 以win1物件呼叫show()函數
   ptr->show();			                 // 以ptr指標呼叫show()函數

   system("pause");
   return 0;
}
