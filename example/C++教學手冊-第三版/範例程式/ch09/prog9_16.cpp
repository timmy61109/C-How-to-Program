// prog9_16, 利用指標求陣列元素和
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int a[3]={5,7,9};
   int i,sum=0;
   for(i=0;i<3;i++)
      sum+=*(a+i);         // 加總陣列元素的總和
   cout << "sum=" << sum << endl;
   
   system("pause");
   return 0;
}
