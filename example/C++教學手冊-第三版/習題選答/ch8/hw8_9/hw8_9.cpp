// hw8_9,
#include <iostream>
#include <cstdlib>
using namespace std;
int find_max(int []); 
int main(void)
{
   int a[4]={2,8,50,7};
   cout << "陣列內容為 "; 
   for(int i=0;i<4;i++)
      cout << a[i] << " ";
   cout << endl << "最大值為 " << find_max(a) << endl;     
   
   system("pause");
   return 0;
}

int find_max(int a[])
{
   int i,max=a[0];
   for(i=0;i<4;i++)     
      if(max<a[i])
         max=a[i];
   return max;
}

/* output------------
陣列內容為 2 8 50 7
最大值為 50
-------------------*/
