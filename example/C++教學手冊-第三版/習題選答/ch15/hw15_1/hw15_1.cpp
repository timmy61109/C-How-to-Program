// hw15_1,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
   private:
      char id;
      int width,height;

   public:
      CWin(char i,int w,int h):id(i),width(w),height(h)
      {}
      int operator>(CWin &win);
      int area(void)
      {
         return width*height;
      }
};

int CWin:: operator>(CWin &win)
{
   return(this->area()>win.area());
}

int main(void)
{
   CWin win1('A',70,80);
   CWin win2('B',60,90);
   if(win1>win2)
      cout << "win1 is larger than win2" << endl;
   else
      cout << "win2 is larger than win1" << endl;

   system("pause");
   return 0;
}

/* output-------------------------------
win1 is larger than win2
--------------------------------------*/
