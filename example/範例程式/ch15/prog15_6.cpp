// prog15_6, 設定運算子多載的進階應用
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    // 定義視窗類別CWin
{
   private:
     char id, *title;
     
   public:     
     CWin(char i='D', char *text="Default window"):id(i)  
     {
        title=new char[50];
        strcpy(title,text);
     }
     void set_data(char i, char *text)
     {
        id=i;
        strcpy(title,text); 
     }   
     CWin &operator=(const CWin &win)     // 定義設定運算子「=」的多載
     {
        id=win.id;
        strcpy(this->title,win.title);    
        return *this;   
     }          
     void show(void)
     {
        cout<<"Window "<< id <<": "<< title <<endl;
     }

     ~CWin(){ delete [] title; } 
     
     CWin(const CWin &win)                // copy constructor
     {
        id=win.id;
        strcpy(title,win.title);         
     }     
};

int main(void)
{
   CWin win1('A',"Main window"); 
   CWin win2('B',"Big window"); 
   CWin win3;
   
   win1.show(); 
   win2.show(); 
   win3.show(); 
   
   win1=win2=win3;                        // 設定win1=win2=win3
   win1.set_data('A',"Hello window");     // 修改win1的內容
   
   cout << "設定win1=win2=win3,並更改win1的成員之後 ..." << endl; 
   win1.show(); 
   win2.show();    
   win3.show();
   
   system("pause");
   return 0;
}
