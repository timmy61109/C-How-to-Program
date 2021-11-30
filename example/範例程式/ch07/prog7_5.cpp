// prog7_5, 傳回值為參照
#include <iostream>
#include <cstdlib>
using namespace std;
int &max(int &,int &);	     // 宣告函數原型，其傳回值為參照
int main(void)
{
   int i=10,j=20;
   max(i,j)=100;			// 將max()函數傳回的參照值重設為100
   cout << "i=" << i << ",j=" << j << endl;
   system("pause");
   return 0;
}

int &max(int &a,int &b)
{
   if(a>b)
      return a;
   else
      return b;
}
