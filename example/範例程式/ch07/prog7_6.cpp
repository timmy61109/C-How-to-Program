// prog7_6, ま计篈ぃㄧ计更 
#include <iostream>
#include <cstdlib>
using namespace std;
int add(int,int);			       // 更よΑㄧ计
double add(double,double);
int main(void)
{
   int a=10,b=20;
   double x=2.3,y=3.5;
   cout << a << "+" << b << "=" << add(a,b) << endl;
   cout << x << "+" << y << "=" << add(x,y) << endl;
   system("pause");
   return 0;
}

int add(int i,int j) 		       // 璹ㄧ计add()
{
   return i+j;       			   // 肚i+j 
}

double add(double i,double j)	   // 璹ㄧ计add()
{      
   return i+j;       			   // 肚i+j 
}
