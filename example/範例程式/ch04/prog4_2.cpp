// prog4_2, 一元運算子「~」與「!」 
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   short n=12;    	               // 宣告short變數n,並設為12
   bool b=false;     	           // 宣告bool變數b,並設為false
   cout << "n=" << n << ",~n=" << ~n << endl;  // 印出n與~n的值
   cout << "b=" << b << ",!b=" << !b << endl;  // 印出b與!b的值
   system("pause");
   return 0;
}
