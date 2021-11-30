// prog7_10, 使用#define
#include <iostream>
#include <cstdlib>
using namespace std;
#define PI 3.14
void peri(double),area(double);
int main(void)
{
   double r=1.0;
   cout << "pi=" << PI << endl;
   cout << "radius=" << r << endl;
   peri(r);		                // 呼叫自訂的函數
   area(r);
   system("pause");
   return 0;
}

void peri(double r)	            // 自訂的函數peri()，印出圓周 
{
   cout << "peripheral length=" << 2*PI*r << endl;
   return;
}

void area(double r)	            // 自訂的函數area()，印出圓面積 
{
   cout << "area=" << PI*r*r << endl;
   return;
}
