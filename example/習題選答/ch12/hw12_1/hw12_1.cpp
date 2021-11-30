// hw12_1,
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa
{
   public:
      int a;
      int b;
      int c;
};

int main(void)
{
   Caaa obj;
   obj.a=1;
   obj.b=3;
   obj.c=obj.a+obj.b;
   cout << "a=" << obj.a << endl;
   cout << "b=" << obj.b << endl;
   cout << "c=" << obj.c << endl;

   system("PAUSE");
   return 0;
}

/* output-------------------------------
a=1
b=3
c=4
--------------------------------------*/
