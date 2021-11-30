// prog7_12, 使用const
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   const short int max=4;
   int i;
   for(i=1;i<=max;i++)		// 計算i的平方
      cout << i << "*" << i << "=" << i*i << "\t";
   system("pause");
   return 0;
}
