// hw7_1,
#include <iostream>
#include <cstdlib>
using namespace std;
void sum(int &,int &);
int main(void)
{     
   int a=6, b=10;
   sum(a,b);
   cout << "a=" << a << ", b=" << b << endl;

   system("pause");
   return 0;
}

void sum(int &x,int &y)
{
   x=x+y;
} 

/* output----------
a=16, b=10
-----------------*/
