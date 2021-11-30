// prog8_2, 一維陣列的設值
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i,a[]={15,6,8};
   int length=sizeof(a)/sizeof(int);   	    // 計算陣列元素個數
   for(i=0;i<length;i++)  			        // 印出陣列的內容
      cout << "a[" << i << "]=" << a[i] << ", ";
   cout << endl << "array a has " << length << " elements"; // 印出length
   system("pause");
   return 0;
}
