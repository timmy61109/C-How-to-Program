// prog6_8, 繰篈跋办跑计
#include <iostream>
#include <cstdlib>
using namespace std;
void func(void);   	// ㄧ计 
int main(void)
{
   func();		   	// ㊣璹ㄧ计
   func();
   func();
   system("pause");
   return 0;
}

void func(void)	   	// 璹ㄧ计func()
{
   static int a=10;
   cout << "In func(),a=" << a << endl;   // func()いa
   a+=20;
   return;
}
