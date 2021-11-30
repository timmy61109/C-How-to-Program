// prog11_13, 列舉常數的設值
#include <iostream>
#include <cstdlib>
using namespace std;
enum month	                                 // 定義列舉型態
{	January,February,March=4,			     // 將March設值為4
    April,May,June } six;
int main(void)
{
   cout << "January=" << January << endl;    // 印出列舉常數的值
   cout << "February=" << February << endl;
   cout << "March=" << March << endl;
   cout << "April=" << April << endl;
   cout << "May=" << May << endl;
   cout << "June=" << June << endl;
   
   system("pause");
   return 0;
}
