// hw4_15,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   double pound,kg=10.0;

   pound=kg/0.454;
   cout << kg << "公斤=" << pound << "英磅" << endl;
    
   system("pause");
   return 0;
}

/* output----------------
10公斤=22.0264英磅
-----------------------*/
