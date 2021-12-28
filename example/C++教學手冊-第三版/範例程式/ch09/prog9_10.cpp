// prog9_10, 盢a籔bが传(タ絋絛ㄒ)
#include <iostream> 
#include <cstdlib>
using namespace std;
void swap(int *,int *);            // ㄧ计swap()
int main(void)
{
   int a=5,b=20;
   cout << "ユ传玡... a=" << a << ", b=" << b << endl;
   swap(&a,&b);      		       // ㊣swap()ㄧ计,肚a籔b
   cout << "ユ传... a=" << a << ", b=" << b << endl;

   system("pause");
   return 0;
}
void swap(int *p1,int *p2)	       // swap()ㄧ计﹚竡
{
   int tmp=*p1;
   *p1=*p2;
   *p2=tmp;
   return;
}
