// prog4_7, 遞增運算子「++」在運算元之前
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int a=10;
   cout << "a=" << a << endl;           		// 印出a
   cout << "++a*2=" << (++a*2) << endl;  	    // 印出++a*2
   cout << "a=" << a << endl;           		// 印出a 
   system("pause");
   return 0;
}
