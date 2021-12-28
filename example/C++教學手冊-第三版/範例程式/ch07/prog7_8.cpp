// prog7_8, ま计箇砞
#include <iostream>
#include <cstdlib>
using namespace std;
double circle(double,double pi=3.14);    // ㄧ计,材2ま计箇砞3.14
int main(void)
{
   cout << "circle(2.0,3.14159)=" << circle(2.0,3.14159) << endl;
   cout << "circle(2.0)=" << circle(2.0) << endl; 
   system("pause");
   return 0;
}

double circle(double r, double pi)	     // circle()ㄧ计﹚竡璸衡蛾縩
{
	return (pi*r*r);
}
