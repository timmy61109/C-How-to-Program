// hw6_9,
#include <iostream>
#include <cstdlib>
using namespace std;
float power(float,int);
int main(void)
{
   double sum=0.0;
   for(int i=1;i<=10;i++)
      sum+=1.0/(power(2,i));
   cout << "sum=" << sum << endl;
   system("pause");
   return 0;
}

float power(float x,int n)
{
   float p=1.0f;
   for(int i=0;i<n;i++)
      p*=x;
   return p;
}

/* output------------
sum=0.999023
-------------------*/
