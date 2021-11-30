// hw8_11,
#include <iostream>
#include <cstdlib>
using namespace std;
int find_min(int [][3]);
int main(void)
{
   int a[3][3]={{21,85,39},{30,72,14},{69,53,41}};
   cout << "陣列內容為" << endl; 
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<3;j++)
         cout << a[i][j] << " ";
      cout << endl;
   }   
   cout << "二維陣列中, 最小值為 " << find_min(a) << endl;
   
   system("pause");
   return 0;
}  

int find_min(int a[3][3])            
{
   int i,j,n,m,min=a[0][0];
   for(i=0;i<3;i++)
      for(j=0;j<3;j++)
         if(a[i][j]<min)     
         {   
            min=a[i][j];
            n=i;
            m=j;
         }   
   cout << "註標值為 [" << n << "][" << m << "]" << endl; 
   return min;     
}

/* output------------------
陣列內容為
21 85 39
30 72 14
69 53 41
註標值為 [1][2]
二維陣列中, 最小值為 14
-------------------------*/
