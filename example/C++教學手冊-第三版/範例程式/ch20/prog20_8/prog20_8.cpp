// prog20_8.cpp 主程式的部分
#include <iostream>
#include <cstdlib>
#include "cwin.h"     		// 載入cwin.h標頭檔
using namespace std;

int main(void)
{
   CWin win1('A',50,60); 
   win1.show();
   
   system("pause");
   return 0;
}
