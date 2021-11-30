// prog6_9, 场跑计
#include <iostream>
#include <cstdlib>
using namespace std;
void peri(double),area(double);     // ㄧ计
int main(void)
{
   extern double pi;				// 场跑计pi
   double r=1.0;
   cout << "pi=" << pi << endl;
   cout << "radius=" << r << endl;
   peri(r);			                // ㊣璹ㄧ计
   area(r);
   system("pause");
   return 0;
}
double pi=3.14;		                // 场跑计pi砞3.14
void peri(double r)	                // 璹ㄧ计peri()蛾㏄
{
   cout << "peripheral length=" << 2*pi*r << endl;
   return;
}

void area(double r)	                // 璹ㄧ计area()蛾縩
{
   cout << "area=" << pi*r*r << endl;
   return;
}
