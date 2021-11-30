// prog4_8, 簡潔運算式
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int a=100,b=15;
   cout << "a=" << a << ", b=" << b << endl;
   a-=b;                          // 計算a=a-b的值
   cout << "after a-=b, a=" << a << ", b=" << b << endl;
   system("pause");
   return 0;
}
