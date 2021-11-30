// hw9_9,
#include <iostream>
#include <cstdlib>
using namespace std;
void cm(double *);
int main(void)
{
   double a,*ptr;
   cout << "請輸入欲轉換的公分數:";
   cin  >> a;
   ptr=&a;
   cout << a <<"公分=";
   cm(ptr);
   cout << a << "英吋" << endl;

   system("pause");
   return 0;
}
void cm( double *ptr)
{
    *ptr=*ptr*0.394;
    return;
}

/* output---------------
請輸入欲轉換的公分數:10
10公分=3.94英吋
----------------------*/
