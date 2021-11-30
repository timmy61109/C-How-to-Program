// prog6_6, inline函數
#include <iostream>
#include <cstdlib>
using namespace std;
inline void star(void) 	// 自訂的函數star(), 繪製星號
{
   cout << "************" << endl;
}

int main(void)       		// 主程式 
{
   star();
   cout << "Hello, C++" << endl;
   star(); 
   system("pause");
   return 0;
}
