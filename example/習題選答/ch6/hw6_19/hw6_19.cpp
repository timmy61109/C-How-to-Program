// hw6_19,
#include <iostream>
#include <cstdlib>
using namespace std;
double km(register double);
int main(void)
{ 
   register double m;
   for(m=60;m<=100;m+=10)
      cout << m << "英哩=" << km(m) << "公里" << endl; 
 
   system("pause");
   return 0;
}

double km(register double mls)
{  
   return 1.6*mls;
}

/* output-----------------
60英哩=96公里
70英哩=112公里
80英哩=128公里
90英哩=144公里
100英哩=160公里
------------------------*/
