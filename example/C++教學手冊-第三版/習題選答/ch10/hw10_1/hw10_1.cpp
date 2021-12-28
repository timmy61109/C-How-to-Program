// hw10_1,
#include <iostream>
#include <cstdlib>
#define M 2
#define N 3
using namespace std;
int main(void)
{
   int i,j;
   int num1[M][N]={{2,2,6},{3,2,8}};
   int num2[M][N]={{5,2,3},{3,3,7}};
   int num3[M][N];
   cout << "num1[][]=" << endl;
   for(i=0;i<M;i++)
   {
      for(j=0;j<N;j++)
         cout << *(*(num1+i)+j) << " ";
      cout << endl;
   }
   cout << "num2[][]=" << endl;
   for(i=0;i<M;i++)
   {
      for(j=0;j<N;j++)
         cout << *(*(num2+i)+j) << " ";
      cout << endl;
   }
   for(i=0;i<M;i++)
      for(j=0;j<N;j++)
       *(*(num3+i)+j)=*(*(num1+i)+j)+ *(*(num2+i)+j);

   cout << endl << "num1+num2=" << endl;
   for(i=0;i<M;i++)
   {
      for(j=0;j<N;j++)
         cout << *(*(num3+i)+j) << " ";
      cout << endl;
   }

   system("pause");
   return 0;
}

/* output-------
num1[][]=
2 2 6
3 2 8
num2[][]=
5 2 3
3 3 7

num1+num2=
7 4 9
6 5 15
--------------*/
