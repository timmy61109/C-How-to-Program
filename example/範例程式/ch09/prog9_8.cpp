// prog9_8, 傳遞指標的應用
#include <iostream> 
#include <cstdlib>
using namespace std;
void add10(int *);		        // add10()函數的原型
int main(void)
{
   int a=5; 			        // 設定變數a的值為5

   cout << "呼叫add10()之前, a=" << a << endl;
   add10(&a);
   cout << "呼叫add10()之後, a=" << a << endl;

   system("pause");
   return 0;
}
void add10(int *p1)
{
   *p1=*p1+10;
   return;
}
