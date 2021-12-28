// hw8_13,
#include <iostream>
#include <cstdlib>
using namespace std;
void search(int [][3],int []);
int main(void)
{
   int a[4][3]={{26,15,72},{10,36,47},
                {65,76,38},{40,49,32}};
   int i,j,result[2];
   cout << "elements in array:" << endl;   // 印出陣列的內容 
   for(i=0;i<4;i++)
   {
      for(j=0;j<3;j++)
         cout << a[i][j] << " ";
      cout << endl;
   }
   search(a,result);
   cout << "maximum=" << result[0] << endl;
   cout << "minimum=" << result[1] << endl;
   
   system("pause");
   return 0;
}

void search(int a[4][3],int b[2])
{
   int i,j,max=a[0][0],min=a[0][0];
   for(i=0;i<4;i++)
      for(j=0;j<3;j++)
      {
         if(max<a[i][j])   // 尋找最大值
            max=a[i][j];
         if(min>a[i][j])   // 尋找最小值
            min=a[i][j];
      }
   b[0]=max;
   b[1]=min;
   return;
}

/* output------------
elements in array:
26 15 72
10 36 47
65 76 38
40 49 32
maximum=76
minimum=10
-------------------*/
