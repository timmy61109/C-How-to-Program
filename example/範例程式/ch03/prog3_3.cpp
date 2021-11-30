// prog3_3, 整數資料型態的溢位
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i=2147483647;	 //宣告i為整數，並設值為2147483647

   cout << "i=" << i << endl;        // 印出i的值
   cout << "i+1=" << i+1 << endl;   // 印出i+1的值
   cout << "i+2=" << i+2 << endl;   // 印出i+2的值
   system("pause");
   return 0;
}
