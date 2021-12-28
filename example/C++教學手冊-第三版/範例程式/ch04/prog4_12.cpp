// prog4_12, 運算式的型態轉換
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char ch='X';
   short s=-5;
   int i=6;
   float f=9.7f;
   double d=1.76; 
   cout << "(s*ch)-(d/f)*(i+f)=";      // 印出結果
   cout << (s*ch)-(d/f)*(i+f) << endl;
   system("pause");
   return 0;
}
