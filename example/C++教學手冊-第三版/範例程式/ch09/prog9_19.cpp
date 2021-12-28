// prog9_19, ㄧ计肚夹
#include <iostream>
#include <cstdlib>
using namespace std;
int *maximum(int *);			 // maximum()ㄧ计
int main(void)
{
   int a[5]={3,1,7,2,6};
   int i,*ptr;
   cout << "皚ず甧 ";
   for(i=0;i<5;i++)			     // 皚ず甧
      cout << a[i] << " ";
   cout << endl;
   ptr=maximum(a);			     // ㊣maximum()ㄧ计肚皚a
   cout << "程 " << *ptr << endl;

   system("pause");
   return 0;
}
int *maximum(int *arr)		     // ﹚竡maximum()ㄧ计
{
   int i,*max;
   max=arr;					     // 砞﹚夹max皚材じ
   for(i=1;i<5;i++)
      if(*max < *(arr+i))
         max=arr+i;
   return max; 				     // 肚程ぇじ
}
