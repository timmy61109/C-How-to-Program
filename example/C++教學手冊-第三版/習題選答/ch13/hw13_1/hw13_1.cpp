// hw13_1,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
   private:
      char id;
      int width,height;

   public:
      CWin(char,int,int);
      CWin(int,int);
      void show_member(void)
      {
         cout << "Window " << id << ": ";
         cout << "width=" << width << ", height= " << height << endl;
      }
};

CWin::CWin(char i,int w,int h)
{
   id=i;
   width=w;
   height=h;
   cout << "CWin(char,int,int)建構元被呼叫了..." << endl;
}

CWin::CWin(int w,int h)
{
   id='Z';
   width=w;
   height=h;
   cout << "CWin(int,int)建構元被呼叫了..." << endl;
}

int main(void)
{
   CWin win1('A',50,40);
   CWin win2(80,120);
   win1.show_member();
   win2.show_member();

   system("pause");
   return 0;
}

/* output-------------------------------
CWin(char,int,int)建構元被呼叫了...
CWin(int,int)建構元被呼叫了...
Window A: width=50, height= 40
Window Z: width=80, height= 120
--------------------------------------*/
