// prog11_17, 自訂型態─typedef的使用
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   typedef float temper;		               // 定義自訂型態
   temper f,c;				                   // 宣告自訂型態變數
   cout << "Input Celsius degrees:";
   cin >> c;
   f=(float)(9.0/5.0)*c+32;   	               // 轉換公式 
   cout << c << " Celsius is equal to ";       // 印出轉換後的結果 
   cout << f << " Fahrenheit degrees" << endl;
   
   system("pause");
   return 0;
}
