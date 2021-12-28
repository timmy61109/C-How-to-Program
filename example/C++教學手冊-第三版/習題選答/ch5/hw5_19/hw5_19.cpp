// hw5_19,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int i=0; 		// 迴圈控制變數

   cout << "進入迴圈, i=" << i << endl;
   for(i=0;i<=99999999;i++);

   cout << "離開迴圈, i=" << i << endl;

   system("pause");
   return 0;
}

/* output----------------
進入迴圈, i=0
離開迴圈, i=100000000
-----------------------*/
