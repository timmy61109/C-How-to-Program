// prog6_2, 不使用函數原型的方式 
#include <iostream>
#include <cstdlib>
using namespace std;
int square(int a)    // 自訂的函數square(), 計算平方值 
{
   int squ;
   squ=a*a;
   return squ;
}

int main(void)       // 主程式 
{
   cout << "square(6)=" << square(6) << endl; // 印出square(6)的值
   system("pause");
   return 0;
}
