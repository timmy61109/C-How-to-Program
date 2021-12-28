// prog6_11, 暫存器變數
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main(void)
{
   time_t start,end;
   register int i,j;            // 定義暫存器整數變數i與j
   start=time(NULL);	        // 記錄開始時間
   for(i=1;i<=50;i++)
   {
      for(j=1;j<=50;j++)
      {   
         cout << setw(2) << i << "*" << setw(2) << j;
         cout << "=" << setw(4) << i*j << "\t";
      }
      cout << endl;
   }
   end=time(NULL);	            // 記錄結束時間
   cout << "It spends " << difftime(end,start) << " seconds";
   system("pause");
   return 0;
}
