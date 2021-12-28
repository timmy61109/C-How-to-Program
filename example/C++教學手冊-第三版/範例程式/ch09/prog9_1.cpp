// prog9_1, 印出變數於記憶體內的位址
#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
   int a,b=5;		             // 宣告變數a與b，但變數a沒有設定初值
   double c=3.14;
   
   cout << "a=" << a << ", sizeof(a)=" << sizeof(a);
   cout << ", 位址為" << &a << endl;
   cout << "b=" << b << ", sizeof(b)=" << sizeof(b);
   cout << ", 位址為" << &b << endl;
   cout << "c=" << c << ", sizeof(c)=" << sizeof(c);
   cout << ", 位址為" << &c << endl;
   
   system("pause");
   return 0;
}
