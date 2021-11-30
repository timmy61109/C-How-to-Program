// prog3_12, 資料的輸入 
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int x,y;
   cout << "Input first integer:";   	// 輸入第一個整數
   cin >> x;				// 由鍵盤中讀取一整數值，並指定給變數x存放
   cout << "Input second integer:";	// 輸入第二個整數
   cin >> y;				// 由鍵盤中讀取一整數值，並指定給變數y存放
   cout << x << "+" << y << "=" << x+y << endl;   // 計算並輸出x+y
   system("pause");
   return 0;
}
