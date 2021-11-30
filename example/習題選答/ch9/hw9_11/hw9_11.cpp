// hw9_11,
#include <iostream>
#include <cstdlib>
using namespace std;
int *find_min(int *,int *,int *);
int main(void)
{
   int n1=23,n2=2,n3=6;
   int *ptr;
   cout << "俱计 ";
   cout << n1 << " " << n2 << " " << n3 << endl;
   ptr=find_min(&n1,&n2,&n3);
   cout << "程 " << *ptr << endl;
   
   system("pause");
   return 0;
}
int *find_min(int *a,int *b,int *c)
{
   int *min;
   if(*a < *b)
      min=a;
   else
      min=b;
   if(*min > *c)
      min=c;
   
   return min;
}

/* output---------------
俱计 23 2 6
程 2
----------------------*/
