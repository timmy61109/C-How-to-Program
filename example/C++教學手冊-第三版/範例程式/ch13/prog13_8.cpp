// prog13_8, 由函數傳回類別型態的變數
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                            // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h)   // 建構元 
     {}
   
     CWin compare(CWin win)   
     {
        if(this->area() >= win.area())
          return *this;	              // 傳回呼叫compare()的物件
        else 
          return win;		          // 傳回compare()所接收的引數
     }
     int area(void)  
     {
        return width*height;
     }  
     char get_id(void) 		          // 成員函數，用來顯示資料成員id的值
     {
        return id;
     }
};

int main(void)
{
   CWin win1('A',70,80);		      // 建立win1物件
   CWin win2('B',60,90); 		      // 建立win2物件	
   
   cout << "Window " << (win1.compare(win2)).get_id();
   cout << " is larger" << endl;
   
   system("pause");
   return 0;
}
