// hw7_5,
#include <iostream>
#include <cstdlib>
using namespace std;
int &max(int &,int &);
int main(void)
{     
   int a=16, b=23;
   cout << "a=" << a << ", b=" << b << endl;  
   cout << max(a,b) << "較大" << endl;   
   
   system("pause");
   return 0;
}

int &max(int &x,int &y)
{  
   if(x>y)
      return x;
   else
      return y;
} 

/* output------------------
a=16, b=23
23較大
-------------------------*/
