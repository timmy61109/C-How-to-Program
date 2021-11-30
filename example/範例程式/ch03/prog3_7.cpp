// prog3_7, 跳脫序列的列印
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char beep='\a';
   int i=beep;                   // 將beep的值設給i
   cout << "beep=" << beep;   // 印出beep的值
   cout << i << endl;
   system("pause");
   return 0;
}
