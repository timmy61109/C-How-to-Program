// prog12_16, 友誼函數的使用
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                              // 定義視窗類別CWin
{
   public:
     void set_data(char i,int w, int h) // 設定數值的函數 
     {
        id=i;
        width=w;
        height=h;
     }
   private:
     char id;
     int width;   
     int height;  
     
   friend void show_member(CWin);   	// 友誼函數的原型
};

void show_member(CWin w)  			    // 定義友誼函數
{
    cout << "Window " << w.id;
    cout << ": width = " << w.width;
    cout << ", height = " << w.height << endl;
} 

int main(void)
{
   CWin win1,win2;  
   
   win1.set_data('A',50,40);  			// 呼叫set_data()來設值 
   win2.set_data('B',80,60);
   show_member(win1);
   show_member(win2);
  
   system("pause");
   return 0;
}
