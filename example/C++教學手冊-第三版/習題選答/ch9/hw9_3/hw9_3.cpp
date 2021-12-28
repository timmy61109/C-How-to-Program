// hw9_3,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   float f;
   int sum=100;

   cout << "f=" << f << ", sizeof(f)=" << sizeof(f);
   cout << ", &f=" << &f << endl;
   cout << "sum=" << sum << ", sizeof(sum)=" << sizeof(sum);
   cout << ", &sum=" << &sum << endl;

   system("pause");
   return 0;
}

/* output-------------------------------
f=2.8026e-045, sizeof(f)=4, &f=0x22ff74
sum=100, sizeof(sum)=4, &sum=0x22ff70
--------------------------------------*/
