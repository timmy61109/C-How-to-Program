// prog9_18, 盢皚材nじnum
#include <iostream>
#include <cstdlib>
using namespace std;
void replace(int *,int,int);            // replace()ㄧ计
int main(void)
{
   int a[5]={1,2,3,4,5};
   int i,num=100;
   cout << "竚传玡皚ず甧 ";
   for(i=0;i<5;i++)			            // 竚传玡皚ず甧
      cout << a[i] << " ";
   cout << endl;
   replace(a,4,num);			        // ㊣ㄧ计replace()
   cout << "竚传皚ず甧 ";
   for(i=0;i<5;i++)			            // 竚传皚ず甧
      cout << a[i] << " ";
   cout << endl;
   
   system("pause");
   return 0;
}
void replace(int *ptr,int n,int num)
{
   *(ptr+n-1)=num;      		        // 盢皚材nじ砞num
   return;
}
