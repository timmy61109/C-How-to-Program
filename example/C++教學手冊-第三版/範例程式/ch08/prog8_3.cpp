// prog8_3, ゑ耕皚じ
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int A[]={48,75,30,17,62};			            // 俱计皚A,砞﹚
   int i,min=A[0],max=A[0];
   int length=sizeof(A)/sizeof(int);   	            // 璸衡皚じ计
   cout << "elements in array A are ";
   for(i=0;i<length;i++)   			                // 皚ず甧
   {
      cout << A[i] << "  ";
      if(A[i]>max)	                                // 耞程
         max=A[i];
      if(A[i]<min)	                                // 耞程
         min=A[i];
   }
   cout << endl << "Maximum is " << max;			// 程
   cout << endl << "Minimum is " << min << endl;	// 程
   system("pause");
   return 0;
}
