// prog12_5, 加入area()函數到類別的定義裡 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		                   // 定義視窗類別CWin
{
   public:
     char id;
     int width;   
     int height;
     
     int area(void) 	               // 定義成員函數area(), 用來計算面積
     {                 
         return width*height;
     }
};

int main(void)
{
   CWin win1;		                   // 宣告CWin類別型態的變數win1 
   win1.id='A';
   win1.width=50;	                   // 設定win1的width成員為50
   win1.height=40;	                   // 設定win1的height成員為40
   
   cout << "Window " << win1.id << ":" << endl;
   cout << "Area = " << win1.area() << endl;     // 計算面積 
   cout << "sizeof(win1) = " << sizeof(win1) << " bytes" << endl;
   
   system("pause");
   return 0;
}
