// hw12_9,
#include <iostream>
#include <cstdlib>
using namespace std;
class CRect
{
   public:
      int width;
      int height;
      double weight;
      void set(double wg)
      {
          weight=wg;
      }
      void set(int w,int h)
      {
         height=h;
         width=w;
      }
      void set(double wg,int w,int h)
      {
         height=h;
         width=w;
         weight=wg;
      }
      void show()
      {
         cout << "height=" << height << endl;
         cout << "width=" << width << endl;
         cout << "weight=" << weight<< endl;
      }
};

int main(void)
{
   CRect A,B;

   A.set(2.6);
   A.set(3,5);
   B.set(3.8,6,10);

   cout<< "object A:" << endl;
   A.show();

   cout << endl << "object A:" << endl;
   B.show();

   system("PAUSE");
   return 0;
}

/* output--------------------
object A:
height=5
width=3
weight=2.6

object A:
height=10
width=6
weight=3.8
---------------------------*/
