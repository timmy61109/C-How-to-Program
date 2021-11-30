// prog15_4, 使用預設的設定運算子所發生的錯誤
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                            // 定義視窗類別CWin
{
   private:
     char id, *title;
     
   public:     
     CWin(char i='D', char *text="Default window"):id(i)  
     {
        title=new char[50];           // 配置可容納50個字元的記憶空間
        strcpy(title,text);           // 將text所指向的字串拷貝給title
     }
     void set_data(char i, char *text)
     {
        id=i;    
        strcpy(title,text);           // 將text所指向的字串拷貝給title
     }    
     void show(void)
     {
        cout << "Window " << id << ": " << title << endl;
     }
     
     ~CWin(){ delete [] title; }      // 解構元
     
     CWin(const CWin &win)  		  // 拷貝建構元
     {
        id=win.id;
        strcpy(title,win.title); 
     }     
};

int main(void)
{
   CWin win1('A',"Main window"); 	
   CWin win2; 	 
   
   win1.show(); 
   win2.show();
   
   win1=win2;                         // 設定win1=win2
   cout << endl << "設定 win1=win2 之後..." << endl;
   win1.show();
   win2.show();

   win1.set_data('B',"Hello window");
   cout << endl << "更改 win1的資料成員之後..." << endl; 
   win1.show(); 
   win2.show();    
   
   system("pause");
   return 0;
}
