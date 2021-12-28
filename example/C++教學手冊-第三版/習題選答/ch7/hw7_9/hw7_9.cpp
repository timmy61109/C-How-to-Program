// hw7_9,
#include <iostream>
#include <cstdlib>
using namespace std;
double trapezoid(int,int,int);
double trapezoid(double,double,double);
int main(void)
{  
   cout << "梯形的上底為6, 下底為8, 高為3, ";
   cout << "面積為" << trapezoid(6,8,3) << endl;
   cout << "梯形的上底為4.8, 下底為3.7, 高為2.5, ";
   cout << "面積為" << trapezoid(4.8,3.7,2.5) << endl;
 
   system("pause");
   return 0;
}

double trapezoid(int upper,int base,int height)
{
	return ((upper+base)*height/2.0);
}

double trapezoid(double upper,double base,double height)
{
	return ((upper+base)*height/2.0);
}

/* output--------------------------------------------
梯形的上底為6, 下底為8, 高為3, 面積為21
梯形的上底為4.8, 下底為3.7, 高為2.5, 面積為10.625
--------------------------------------------------*/
