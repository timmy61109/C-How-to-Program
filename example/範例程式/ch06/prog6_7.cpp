// prog6_7, 跋办跑计
#include <iostream>
#include <cstdlib>
using namespace std;
void func(void);                           // ㄧ计 
int main(void)
{
   auto int a=10;
   cout << "In Main(),a=" << a << endl;	   // main()いa
   func();		                           // ㊣璹ㄧ计
   cout << "In Main(),a=" << a << endl;	   // a
   system("pause");
   return 0;
}

void func(void)	                           // 璹ㄧ计func()
{
   int a=30;
   cout << "In func(),a=" << a << endl;   // func()いa
   return;
}
