// hw15_7,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
   private:
      char id;
      int width,height;

   public:
      CWin(char i='D',int w=10,int h=10):id(i),width(w),height(h)
      {}

      void show_member(void)
      {
         cout << "window " << id << ": ";
         cout << "width=" << width << ", height=" << height << endl;
      }
      int get_w(void)
      {
         return width;
      }
      int get_h(void)
      {
         return height;
      }
};

CWin operator+(CWin &win1,CWin &win2 )
{
    int w,h;
    w=win1.get_w() > win2.get_w() ? win1.get_w() : win2.get_w();
    h=win1.get_h() > win2.get_h() ? win1.get_h() : win2.get_h();
    return CWin('D',w,h);
}

int main(void)
{
   CWin win1('A',70,80);
   CWin win2('B',60,90);
   CWin win3;

   win3=win1+win2;
   win3.show_member();

   system("pause");
   return 0;
}

/* output-------------------------------
window D: width=70, height=90
--------------------------------------*/
