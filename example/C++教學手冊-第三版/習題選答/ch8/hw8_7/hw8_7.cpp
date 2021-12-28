// hw8_7,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int A[2][2][2]={{{95,85},{66,78}},{{89,77},{60,83}}};
   int i,j,k,sum=0;
   for(i=0;i<2;i++)	    // 印出陣列內容並計算總和
      for(j=0;j<2;j++)
         for(k=0;k<2;k++)
         {
            cout << "A[" << i << "][" << j << "][" << k << "]=";
            cout << A[i][j][k] << endl;
            sum+=A[i][j][k];
         }
   cout << "sum=" << sum << endl;
   
   system("pause");
   return 0;
}

/* output-------
A[0][0][0]=95
A[0][0][1]=85
A[0][1][0]=66
A[0][1][1]=78
A[1][0][0]=89
A[1][0][1]=77
A[1][1][0]=60
A[1][1][1]=83
sum=633
--------------*/
