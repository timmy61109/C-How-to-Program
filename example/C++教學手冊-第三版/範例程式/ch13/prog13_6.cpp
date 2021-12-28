// prog13_6, 使用初始化串列來設定初值 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                           // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i='D',int w=100,int h=100):id(i),width(w),height(h) 
     {
        cout << "成員已被初始化了" << endl; 
     }
     void show_member(void)          // 成員函數，用來顯示資料成員的值
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

int main(void)
{
   CWin win1('A',80);		         // 建立win1物件
   CWin win2; 			             // 建立win2物件
 
   win1.show_member();  
   win2.show_member();  
        
   system("pause");
   return 0;
}
