//prog19_6, 括號的省略
#include <iostream>   
#include <cstdlib>
using namespace std;
template <class T>          // 定義函數樣板add()
T add(T a,T b)
{
   T sum=a+b;
   return sum;
}

int main(void)
{
   cout << "add(3,4)=" << add(3,4) << endl;	        // 呼叫add(3,4)
   cout << "add(3.2,4.6)=" << add(3.2,4.6) << endl; // 呼叫 add(3.2,4.6)

   system("pause");
   return 0;
}
