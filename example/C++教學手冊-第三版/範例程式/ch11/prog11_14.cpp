// prog11_14, 列舉型態的使用
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
enum month	                 // 定義列舉型態
{	January,February,March,
    April,May,June } six;
int main(void)
{
   string a[6]={"January","February","March",
                "April","May","June"};
   for(six=January;six<=June;six=static_cast<month>(six+1))
      cout << "six(" << six << ")=" << a[six] << endl;
   
   system("pause");
   return 0;
}
