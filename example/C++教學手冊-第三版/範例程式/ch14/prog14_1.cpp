// prog14_1, 解構元的使用
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin              // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h)  
     {
        cout << "建構元被呼叫了..." << endl; 
     }
     ~CWin()            // 解構元
     {
        cout << "解構元被呼叫了， Win " << this->id << "被銷毀了.." << endl;
        system("pause");
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
   CWin win2('B',40,50); 	 
   CWin win3('C',60,70); 
   CWin win4('D',90,40);    	 
   
   win1.show_member(); 
   win2.show_member();
        
   system("pause");
   return 0;
}
