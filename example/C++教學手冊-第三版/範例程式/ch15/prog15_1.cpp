// prog15_1, 運算子「>」多載的範例
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h) // 建構元 
     {}
   
     int operator>(CWin &win)   // 定義運算子「>」的多載
     {
        return(this->area() > win.area());
     }
     int area(void)  
     {
        return width*height;
     }  
};

int main(void)
{
   CWin win1('A',70,80);		
   CWin win2('B',60,90); 			
              
   if(win1>win2)    // 判別win1與win2物件之面積的大小
      cout << "win1 is larger than win2" << endl;
   else
      cout << "win2 is larger than win1" << endl;   
       
   system("pause");
   return 0;
}
