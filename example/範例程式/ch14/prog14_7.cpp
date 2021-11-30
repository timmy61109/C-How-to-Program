// prog14_7, 撰寫自己的拷貝建構元
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                      // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h)  
     {
        cout << "建構元被呼叫了..." << endl; 
     }
     CWin(const CWin &win)      // 定義拷貝建構元
     {
        cout << "拷貝建構元被呼叫了..." << endl; 
        id=win.id;
        width=win.width;   
        height=win.height; 
     }             
     void show_member(void)
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

int main(void)
{
   CWin win1('A',50,40); 	
   CWin win2(win1);             // 呼叫拷貝建構元 
   
   win1.show_member(); 
   win2.show_member();
        
   system("pause");
   return 0;
}
