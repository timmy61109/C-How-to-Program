// hw9_2,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   short a=3;
   int b=20;
   double f=2.365;

   cout << "a=" << a << ", sizeof(a)=" << sizeof(a);
   cout << ", &a=" << &a << endl;
   cout << "b=" << b << ", sizeof(b)=" << sizeof(b);
   cout << ", &b=" << &b << endl;
   cout << "f=" << f << ", sizeof(f)=" << sizeof(f);
   cout << ", &f=" << &f << endl;
   
   system("pause");
   return 0;
}

/* output-------------------------------
a=3, sizeof(a)=2, &a=0x22ff76
b=20, sizeof(b)=4, &b=0x22ff70
f=2.365, sizeof(f)=8, &f=0x22ff68
--------------------------------------*/
