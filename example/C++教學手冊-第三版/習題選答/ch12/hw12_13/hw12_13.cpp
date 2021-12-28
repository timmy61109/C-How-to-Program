// hw12_13,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
   public:
      char id;
      int width;
      int height;

      void set_data(char i,int w,int h)
      {
         id=i;
         width=w;
         height=h;
      }
       friend int area(CWin);
};

int area(CWin win)
{
    return win.width*win.height;
}
void show_area(CWin win)
{
    cout << "Window " << win.id << ", area=" << area(win) << endl;
}

int main(void)
{
  CWin win1;

  win1.set_data('B',50,40);
  show_area(win1);

  system("PAUSE");
  return 0;
}

/* output--------------------
Window B, area=2000
---------------------------*/
