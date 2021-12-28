// prog9_3, 指標變數的使用
#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
   int a=5,b=3;
   int *ptr; 		         // 宣告指標變數ptr
   
   ptr=&a;			         // 將a的位址設給指標ptr存放
   cout << "&a=" << &a << ", &ptr=" << &ptr;
   cout << ", ptr=" << ptr << ", *ptr=" << *ptr << endl;
   ptr=&b;          	     // 將b的位址設給指標ptr存放
   cout << "&b=" << &b << ", &ptr=" << &ptr;
   cout << ", ptr=" << ptr << ", *ptr=" << *ptr << endl;
   
   system("pause");
   return 0;
}
