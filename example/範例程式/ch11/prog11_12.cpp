// prog11_12, 列舉型態的使用
#include <iostream>
#include <cstdlib>
using namespace std;
enum month	// 定義列舉型態
{	January,February,March,
    April,May,June } six;
int main(void)
{
   cout << "sizeof(six)=" << sizeof(six) << endl; // 列舉型態的長度
   cout << "January=" << January << endl;   // 印出列舉常數的值
   cout << "February=" << February << endl;
   cout << "March=" << March << endl;
   cout << "April=" << April << endl;
   cout << "May=" << May << endl;
   cout << "June=" << June << endl;
   
   system("pause");
   return 0;
}
