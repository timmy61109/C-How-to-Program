// hw7_13,
#include <iostream>
#include <cstdlib>
using namespace std;
double avg(int a,int b=5,int c=7);
int main(void)
{  
   cout << avg(13) << endl; 
   cout << avg(9,16) << endl;
   cout << avg(8,17,3) << endl;
   
   system("pause");
   return 0;
}

double avg(int a,int b,int c)
{  
   cout << "a=" << a << ", b=" << b << ", c=" << c;
   cout << ", average=";
   return (a+b+c)/3.0;
}

/* output-------------------------
a=13, b=5, c=7, average=8.33333
a=9, b=16, c=7, average=10.6667
a=8, b=17, c=3, average=9.33333
--------------------------------*/
