// hw7_3,
#include <iostream>
#include <cstdlib>
using namespace std;
void gcd(int &,int &,int &);
int main(void)
{     
   int x=21, y=49,g;
   cout << "The GCD of " << x << " and " << y << " is ";
   gcd(x,y,g);
   cout << g << endl;

   system("pause");
   return 0;
}

void gcd(int &a,int &b,int &g)
{
   while(b!=0)
   {
      g=a%b;
      a=b;
      b=g;
   }
   g=a;
} 

/* output------------------
The GCD of 21 and 49 is 7
-------------------------*/
