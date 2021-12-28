// prog8_5, 二維陣列的使用 
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i,j,sum=0;
   int sale[2][4]={{30,35,26,32},{33,34,30,29}};    // 宣告陣列並設定初值
   for(i=0;i<2;i++)	                                // 輸出銷售量並計算總銷售量
   {
      cout << "業務員" << (i+1) << "的業績分別為 ";
      for(j=0;j<4;j++)
      {
	      cout << sale[i][j] << " ";
	      sum+=sale[i][j];
      }
      cout << endl;
   }
   cout << endl << "本年度總銷售量為" << sum << "輛車" << endl;
   system("pause");
   return 0;
}
