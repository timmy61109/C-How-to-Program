// prog3_11, 資料的輸入 
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   double d;
   cout << "Input a number:";       // 輸入一個數
   cin >> d;				        // 由鍵盤讀取一數值，指定給變數d存放
   cout << "num=" << d << endl;   	// 輸出d
   system("pause");
   return 0;
}
