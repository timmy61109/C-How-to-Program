// prog8_6, 三維陣列的使用 
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int A[2][4][3]={{{21,32,65},        // 宣告陣列並設定初值
                        {78,94,76},
                        {79,44,65},
                        {89,54,73}},
                       {{32,56,89},
                        {43,23,32},
                        {32,56,78},
                        {94,78,45}}};
   int i,j,k,max=A[0][0][0];           // 設定max為A陣列的第一個元素  
   
   for(i=0;i<2;i++)   		 
      for(j=0;j<4;j++)      
         for(k=0;k<3;k++)            
            if(max<A[i][j][k])
               max=A[i][j][k];   
   cout << "max=" << max << endl;		// 印出陣列的最大值
   
   system("pause");
   return 0;
}
