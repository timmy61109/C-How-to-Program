// prog15_3,「+」運算子多載的範例
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                          // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i='D',int w=10,int h=10):id(i),width(w),height(h)
     {}
   
     CWin operator+(CWin &win)      // 定義「+」運算子的多載
     {
        int w,h;
        w = this->width > win.width ? this->width : win.width;
        h = this->height > win.height ? this->height : win.height;
        return CWin('D',w,h);       // 呼叫建構元建立並傳回新的物件
     }
     void show_member(void)
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

int main(void)
{
   CWin win1('A',70,80);
   CWin win2('B',60,90); 
   CWin win3;
   
   win3=win1+win2;                  // 物件的加法運算
   win3.show_member();
   
   system("pause");
   return 0;
}
