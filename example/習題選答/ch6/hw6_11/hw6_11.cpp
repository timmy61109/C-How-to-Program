// hw6_11,
#include <iostream>
#include <cstdlib>
using namespace std;
double centigrade(double);
int main(void)
{
   double f=-40.0;
   cout << "華氏" << f << "度=攝氏";
   cout << centigrade(f) << "度" << endl;
   system("pause");
   return 0;
}

double centigrade(double f)
{
   double c;
   c=(5*f-160)/9;
   return c;
}

/* output------------
華氏-40度=攝氏-40度
-------------------*/
