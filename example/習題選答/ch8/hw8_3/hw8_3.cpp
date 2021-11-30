// hw8_3,
#include <iostream>
#include <cstdlib>
#define MAX 5
using namespace std;
int main(void)
{
   double a[MAX];
   int i=0;
   float sum=0.0f;
   cout << "請輸入五個浮點數" << endl;
   for(i=0;i<MAX;i++)
   {
      cout << "Input number #" << i+1 << ": ";
      cin  >> a[i];
   }     
   for(i=0;i<MAX;i++)
      sum+=a[i];         
   cout << "Average of all is " << sum/MAX << endl;         
   
   system("pause");
   return 0;
}

/* output-----------------
請輸入五個浮點數
Input number #1: 3.65
Input number #2: 9.58
Input number #3: 23.145
Input number #4: 1.784
Input number #5: 6.91
Average of all is 9.0138
------------------------*/
