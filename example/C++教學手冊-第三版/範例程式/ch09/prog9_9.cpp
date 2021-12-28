// prog9_9, 盢a籔bが传(岿粇ボ絛)
#include <iostream> 
#include <cstdlib>
using namespace std;
void swap(int,int);		          // swap()ㄧ计
int main(void)
{
   int a=5,b=20;
   cout << "ユ传玡... a=" << a << ", b=" << b << endl;
   swap(a,b);
   cout << "ユ传... a=" << a << ", b=" << b << endl;

   system("pause");
   return 0;
}
void swap(int x,int y)	          // ﹚竡swap()ㄧ计
{
   int tmp=x;
   x=y;
   y=tmp;
   return;
}
