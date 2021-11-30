// hw6_21,
#include<iostream>
#include<cstdlib>
using namespace std;
int fact(int);
double power(double,int);
int main(void)
{
   double sum=0.0;
   for(int k=1;k<=10;k++)
      sum+=power(0.1,k)/(fact(k));
   cout << "sum=" << sum << endl;	

   system("pause");
   return 0;
}

int fact(int a)		// ¦Û­q¨ç¼Æfact()¡A­pºâa!
{
   if(a>0)
      return (a*fact(a-1));
   else
      return 1;
}

double power(double x,int n)
{
   float p=1.0f;   
   for(int i=0;i<n;i++)
      p*=x;
   return p;
}

/* output-------------------
sum=0.105171
--------------------------*/
