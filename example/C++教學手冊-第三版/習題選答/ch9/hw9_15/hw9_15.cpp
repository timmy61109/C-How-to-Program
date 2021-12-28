// hw9_15,
#include <iostream>
#include <cstdlib>
using namespace std;
void square(int *);
int main(void)
{
   int i, a[5]={1,2,3,4,5};
   cout << "陣列內容為 ";
   for(i=0;i<5;i++)
      cout << *(a+i) << " ";
   square(a);
   cout << endl << "將每個元素平方, 結果為 ";
   for(i=0;i<5;i++)
      cout << *(a+i) << " ";
   cout << endl;

   system("pause");
   return 0;
}
void square(int *arr)
{
   for(int i=0;i<5;i++)
      *(arr+i)=(*(arr+i)) * (*(arr+i));
   return;
}

/* output---------------------------
陣列內容為 1 2 3 4 5
將每個元素平方, 結果為 1 4 9 16 25
----------------------------------*/
