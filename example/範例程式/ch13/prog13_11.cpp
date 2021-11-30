// prog13_11, 簡單的範例, 實例變數與實例方法 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                  // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h)  
     {}

     void show_member(void) 
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

int main(void)
{
   CWin win1('A',50,40); 	
   CWin win2('B',60,80);
   
   win1.show_member();  
   win2.show_member();     
      
   system("pause");
   return 0;
}
