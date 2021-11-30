// hw7_7,
#include <iostream>
#include <cstdlib>
using namespace std;
double min(double,double);
double min(double,double,double);
int main(void)
{     
   cout << "min(8.3,12.5)=" << min(8.3,12.5) << endl;  
   cout << "min(5.8,7.12,3.69)=" << min(5.8,7.12,3.69) << endl;  
   
   system("pause");
   return 0;
}

double min(double a,double b)
{
	if(a<b)
		return a;
	else
		return b;
}

double min(double a,double b,double c)
{
	if(a<b && a<c)
		return a;
	else if(b<a && b<c)
		return b;
	else
		return c;
}

/* output------------------
min(8.3,12.5)=8.3
min(5.8,7.12,3.69)=3.69
-------------------------*/
