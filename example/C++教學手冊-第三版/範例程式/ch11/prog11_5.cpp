// prog11_5, 結構與函數
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct mydata				               // 定義結構
{
   string name;
   int age;
};
void func(struct mydata);                  // 函數原型 
int main(void)
{
   struct mydata woman={"Mary Wu",5};      // 宣告結構變數
   cout << "before process..." << endl;   
   cout << "In main(), " << woman.name;    // 印出結構變數內容
   cout << "'s age is " << woman.age << endl;
   cout << "after process..." << endl;
   func(woman);	         		           // 呼叫func()函數
   cout << "In main(), " << woman.name;
   cout << "'s age is " << woman.age << endl;
   
   system("pause");
   return 0;
}

void func(struct mydata a)	               // 自訂函數func()
{
   a.age+=10;
   cout << "In func(), " << a.name;        // 印出結構變數內容
   cout << "'s age is " << a.age << endl;
   return;
}
