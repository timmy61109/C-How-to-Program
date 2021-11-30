// prog13_16, 傳遞物件的參照到函數裡
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                          // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h)  // 建構元 
     {}
   
     void compare(CWin &win)	    // compare()可接收物件的參照
     {
        if(this->area() > win.area())
          cout << "Window " << this->id << " is larger" << endl;
        else
          cout << "Window " << win.id << " is larger" << endl;
     }
     int area(void)  			    // 成員函數area()
     {
        return width*height;	    // 傳回物件的面積值
     }  
};

int main(void)
{
   CWin win1('A',70,80);		
   CWin win2('B',60,90); 		
     
   win1.compare(win2);	            // 用win1呼叫compare()，並傳遞win2
        
   system("pause");
   return 0;
}
