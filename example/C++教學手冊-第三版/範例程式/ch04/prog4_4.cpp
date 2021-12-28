// prog4_4, 餘數運算子「%」
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int a=123;		         // 宣告int變數a,並設值為123
   int b=6;      		     // 宣告int變數b,並設值為6
   cout << a << "%" << b << "=" << a%b << endl;    // 印出a%b的值
   cout << b << "%" << a << "=" << b%a << endl;    // 印出b%a的值
   system("pause");
   return 0;
}
