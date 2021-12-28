// hw13_3,
#include <iostream>
#include <cstdlib>
using namespace std;
class CRectangle
{
   private:
      int width;
      int height;

   public:
      CRectangle(int w,int h)
      {
         width=w;
         height=h;
      }
      CRectangle()
      {
         width=10;
         height=10;
      }
      void show_member(void)
      {
         cout << "width=" << width;
         cout << ", height= " << height << endl;
      }
};

int main(void)
{
   CRectangle win1(30,60);
   CRectangle win2;

   win1.show_member();
   win2.show_member();

   system("pause");
   return 0;
}

/* output-------------------------------
width=30, height= 60
width=10, height= 10
--------------------------------------*/
