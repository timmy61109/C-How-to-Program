// prog9_13, 傳遞函數到其他函數中
#include <iostream>
#include <cstdlib>
using namespace std;
double triangle(double,double),rectangle(double,double);
void showarea(double,double,double (*pf)(double,double));
int main(void)
{
   cout << "triangle(6,3.2)=";
   showarea(6,3.2,triangle);                   // 呼叫triangle(),並印出其值
   cout << "rectangle(4,6.1)=";
   showarea(4,6.1,rectangle);                  // 呼叫rectangle(),並印出其值
   
   system("pause");
   return 0;
}

double triangle(double base,double height)     // 計算三角形面積
{
   return (base*height/2);
}

double rectangle(double height,double width)   // 計算長方形面積
{
   return (height*width);
}

void showarea(double x,double y,double (*pf)(double,double))
{
   cout << (*pf)(x,y) << endl;
   return;
}
