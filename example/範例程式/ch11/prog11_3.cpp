// prog11_3, 結構變數的初值設定
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct mydata	                              // 定義並宣告結構變數
{
   string name;
   int math;
} student={"Mary Wang",74};                   // 設定結構變數初值
int main(void)
{
   cout << "Student's name:" << student.name; // 輸出結構變數內容
   cout << endl << "math score=" << student.math << endl;
   
   system("pause");
   return 0;
}
