// hw6_15,
#include <iostream>
#include <cstdlib>
using namespace std;
inline double power(double x,int n)
{
   double p=1.0f;
   for(int i=0;i<n;i++)
      p*=x;
   return p;
}

inline double f(double x)
{
   double sum=0.0f;
   sum=3*power(x,3)+2*x-1;
   return sum;
}

int main(void)
{   
   cout << "f(x)=3x^3+2x-1" << endl;
   for(double x=0;x<=2;x+=0.4)
      cout << "f(" << x << ")=" << f(x) << endl;
   
   system("pause");
   return 0;
}

/* output------------
f(x)=3x^3+2x-1
f(0)=-1
f(0.4)=-0.008
f(0.8)=2.136
f(1.2)=6.584
f(1.6)=14.488
f(2)=27
-------------------*/
