// prog8_1, 一維陣列
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int score[6];

   // 印出陣列中個別元素的長度及陣列的總長度
   cout << "sizeof(score[1])=" << sizeof(score[1]) << endl;
   cout << "sizeof(score)=" << sizeof(score) << endl;
   system("pause");
   return 0;
}
