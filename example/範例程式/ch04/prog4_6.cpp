// prog4_6, 遞增運算子「++」在運算元之後
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int a=10;
   cout << "a=" << a << endl;           		// 印出a
   cout << "a++*2=" << (a++*2) << endl;  	    // 印出a++*2 
   cout << "a=" << a << endl;           		// 印出a 
   system("pause");
   return 0;
}
