// hw13_5,
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
      int area(void)
      {
        return width*height;
      }
      friend void compare(CWin,CWin);
};

void compare(CWin win1,CWin win2)
{
   if(win1.area() >= win2.area())
      cout << "window " << win1.id << " is larger " << endl;
   else
      cout << "window " << win2.id << " is larger " << endl;
}

int main(void)
{
   CWin win1('A',70,80);
   CWin win2('B',60,90);
   compare(win1,win2);

   system("pause");
   return 0;
}

/* output-------------------------------
window A is larger
--------------------------------------*/
