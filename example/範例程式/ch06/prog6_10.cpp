// prog6_10, 繰篈场跑计
#include <iostream>
#include <cstdlib>
using namespace std;
static int a;               // ﹚竡繰篈场俱计跑计a
void odd(void);    	        // ㄧ计 
int main(void)
{   
   odd();	      	        // ㊣odd()ㄧ计
   cout << "after odd(), a=" << a << endl;
   system("pause");
   return 0;
}

void odd(void)		        // 璹ㄧ计odd()耞a计┪琌案计
{
   a=10;
   if(a%2==1)
      cout << "a=" << a << ", a琌计" << endl;   // a计
   else
      cout << "a=" << a << ", a琌案计" << endl;   // a案计
   return;
}
