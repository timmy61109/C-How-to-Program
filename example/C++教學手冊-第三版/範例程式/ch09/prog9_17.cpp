// prog9_17, 利用指標求陣列元素和
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int a[3]={5,7,9};
   int i,sum=0;
   int *ptr=a;			        // 設定指標ptr指向陣列a
   for(i=0;i<3;i++)
      sum+=*(ptr++);    	    // 陣列元素值的累加
   cout << "sum=" << sum << endl;
   
   system("pause");
   return 0;
}
