// prog12_9, 傳遞引數到函數裡 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		                         // 定義視窗類別CWin
{
   public:
     char id;
     int width;   
     int height;
     
     int area() 		                     // 定義成員函數area(), 用來計算面積
     {                 
        return width*height;
     }
     void show_area(void)
     {
        cout << "Window " << id << ", area=" << area() << endl;
     }
     void set_data(char i,int w,int h)       // set_data() 函數
     {
        id=i;        	                     // 設定id成員 
        width=w; 		                     // 設定width成員
        height=h; 	                         // 設定height成員
     }
};

int main(void)
{
   CWin win1;   
   
   win1.set_data('B',50,40); 
   win1.show_area();     
   
   system("pause");
   return 0;
}
