// hw12_7,
#include <iostream>
#include <cstdlib>
using namespace std;
class CBox
{
   public:
      int length;
      int width;
      int height;
      void volume(void)
      {
         cout << "體積=" << length*width*height << endl;
      }
      void surfaceArea(void)
      {
         cout << "表面積=" << 2*(length*width+length*height
                 +width*height) << endl;
      }
};

int main(void)
{
  CBox a;
  a.height=3;
  a.width=4;
  a.length=5;
  cout << "長=" << a.length << endl;
  cout << "寬=" << a.width << endl;
  cout << "高=" << a.height << endl;
  a.volume();
  a.surfaceArea();
  
  system("PAUSE");
  return 0;
}

/* output--------------------
長=5
寬=4
高=3
體積=60
表面積=94
---------------------------*/
