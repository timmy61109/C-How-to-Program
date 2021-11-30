// prog4_11, 顯性資料型態轉換
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int a=36,b=7;
   cout << "a=" << a << ", b=" << b << ", ";   	// 印出a、b的值
   cout << "a/b=" << (a/b) << endl;         	// 印出a/b的值
   cout << "a=" << a << ", b=" << b << ", ";   	// 印出a、b的值
   cout << "a/b=" << (float)a/b << endl;	    // 印出(float)a/b的值
   system("pause");
   return 0;
}
