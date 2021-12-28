// prog12_6, 於類別裡定義多個函數 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		             // 定義視窗類別CWin
{
   public:
     char id;
     int width;   
     int height;
     
     int area() 		         // 定義成員函數area(), 用來計算面積
     {                 
         return width*height;
     }
     int perimeter()             // 定義成員函數perimeter(), 用來計算周長
     {
         return 2*(width + height);
     }
};

int main(void)
{
   CWin win1;   		         // 宣告CWin類別型態的變數win1 
   
   win1.id='A';
   win1.width=50;	             // 設定win1的width成員為50
   win1.height=40;	             // 設定win1的height成員為40
   
   cout << "Window " << win1.id << ":" << endl;
   cout << "Area = " << win1.area() << endl;  		        // 計算面積
   cout << "Perimeter = " << win1.perimeter() << endl;      // 計算周長 
   
   system("pause");
   return 0;
}
