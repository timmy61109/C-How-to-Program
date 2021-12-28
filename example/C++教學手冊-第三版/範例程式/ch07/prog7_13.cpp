// prog7_13, 使用巨集
#include <iostream>
#include <cstdlib>
using namespace std;
#define POWER i*i*i
int main(void)
{
   int i;
   cout << "Input an integer:";
   cin >> i;
   
   // 計算並印出i的3次方
   cout << i << "*" << i << "*" << i << "=" << POWER << endl;
   system("pause");
   return 0;}
