// hw7_17,
#include <iostream>
#include <cstdlib>
using namespace std;
#define MAX(X,Y) ((X) > (Y) ? (X) : (Y))
int main(void)
{
   int a=12, b=6;
   double x=3.6, y=9.7;
   cout << "MAX(" << a << "," << b << ")=";
   cout << MAX(a,b) << endl; 
   cout << "MAX(" << x << "," << y << ")=";
   cout << MAX(x,y) << endl;    
   
   system("pause");
   return 0;
}

/* output------------
MAX(12,6)=12
MAX(3.6,9.7)=9.7
-------------------*/
