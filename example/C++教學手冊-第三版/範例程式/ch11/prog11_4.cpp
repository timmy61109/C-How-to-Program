// prog11_4, 結構的設值
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct mydata	    // 定義結構
{
   string name;
   int age;
} x;			    // 宣告結構變數
int main(void)
{
   struct mydata y={"Lily Chen",18};
   x=y;
   //輸出結構變數內容
   cout << "x.name=" << x.name << ", x.age=" << x.age << endl;
   cout << "y.name=" << y.name << ", y.age=" << y.age << endl;
   
   system("pause");
   return 0;
}
