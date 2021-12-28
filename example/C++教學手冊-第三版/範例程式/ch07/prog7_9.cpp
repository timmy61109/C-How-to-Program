// prog7_9, 引數的預設值 
#include <iostream>
#include <cstdlib>
using namespace std;
int sum(int start=1,int end=10,int di=1);	// 函數原型
int main(void)
{
   cout << "sum()=" << sum() << endl;
   cout << "sum(2)=" << sum(2) << endl;
   cout << "sum(2,8)=" << sum(2,8) << endl;
   cout << "sum(1,15,3)=" << sum(1,15,3) << endl;
   system("pause");
   return 0;
}

int sum(int start,int end,int di)   		// 計算數值的累加
{
   int i,total=0;
   for(i=start;i<=end;i+=di)
      total+=i;
   return total;
}
