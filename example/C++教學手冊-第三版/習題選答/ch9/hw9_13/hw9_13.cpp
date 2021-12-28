// hw9_13,
#include <iostream>
#include <cstdlib>
using namespace std;
double agv(int *);
int main(void)
{
   int i,a[10],*ptr=a;
   for(i=0;i<10;i++)
   {
      cout << "Input num#" << i+1 << ": ";
      cin  >> *(ptr+i);
   }
   cout << "陣列的平均值為:" << agv(ptr) << endl;
   
   system("pause");
   return 0;
}
double agv(int *ptr)
{
   double sum=0;
   for(int i=0;i<10;i++)
      sum+=*(ptr++);
   return sum/10;
}

/* output-----------
Input num#1: 1
Input num#2: 2
Input num#3: 3
Input num#4: 4
Input num#5: 5
Input num#6: 6
Input num#7: 7
Input num#8: 8
Input num#9: 9
Input num#10: 10
陣列的平均值為:5.5
------------------*/
