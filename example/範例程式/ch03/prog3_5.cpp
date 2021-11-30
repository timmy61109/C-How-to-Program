// prog3_5, 字元的列印
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char ch='8';			// 將'8'設給字元變數ch
   int i=ch;
   cout << "ch=" << ch << endl;            // 印出ch的值
   cout << "The ASCII code is " << i << endl;
   system("pause");
   return 0;
}
