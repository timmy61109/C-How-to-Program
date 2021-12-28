// hw7_11,
#include <iostream>
#include <cstdlib>
using namespace std;
int max(int,int b=10);
int main(void)
{  
   cout << "max(5)=" << max(5) << endl;
   cout << "max(5,3)=" << max(5,3) << endl;
   
   system("pause");
   return 0;
}

int max(int a,int b)
{
   if(a>b)
      return a;
   else
      return b;
}

/* output------------
max(5)=10
max(5,3)=5
-------------------*/
