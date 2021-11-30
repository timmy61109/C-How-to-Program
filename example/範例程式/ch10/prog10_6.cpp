// prog10_6, 整數陣列之動態記憶體配置
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i,*a;
   a=new int[5];		// 為陣列配置動態記憶體, 並使指標a指向該記憶體
   for(i=0;i<5;i++)	    // 為陣列元素設值
   a[i]=i*2;
   for(i=0;i<5;i++)	    // 印出陣列的內容
      cout << "a[" << i << "]=" << a[i] << "\t";
   cout << endl;
   delete[] a;	     	// 釋放陣列的動態記憶體配置區域
   a=NULL;			    // 使指標a不指向任何地方

   system("pause");
   return 0;
}
