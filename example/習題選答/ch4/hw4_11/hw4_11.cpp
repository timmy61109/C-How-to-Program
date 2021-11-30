// hw4_11,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int a=5,b=3,num=0;

   num=(a++)+b;
   cout << "a="<< a << ", b=" << b << ", num=" << num << endl;

   a=5;  b=3;  num=0;
   num=(++a)+b;
   cout << "a="<< a << ", b=" << b << ", num=" << num << endl;
   
   a=5;  b=3;  num=0;
   num=(a++)+(b++);
   cout << "a="<< a << ", b=" << b << ", num=" << num << endl;

   a=5;  b=3;  num=0;
   num=(++a)+(++b);
   cout << "a="<< a << ", b=" << b << ", num=" << num << endl;

   a=5;  b=3;  num=0;
   a+=a+(b++);
   cout << "a="<< a << ", b=" << b << ", num=" << num << endl;
    
   system("pause");
   return 0;
}

/* output----------------
a=6, b=3, num=8
a=6, b=3, num=9
a=6, b=4, num=8
a=6, b=4, num=10
a=13, b=4, num=0
-----------------------*/
