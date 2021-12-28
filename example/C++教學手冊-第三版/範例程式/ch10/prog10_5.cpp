// prog10_5, 基本資料型態之動態記憶體配置
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int *a;	                             // 宣告int型態的指標變數a
   a=new int;                            // 配置int型態的動態記憶體, 並將起始位址給指標a存放
   *a=5;	                             // 將指標a所指向的位址之內容設值為5
   cout << "*a=" << *a << endl;	         // 印出a所指向位址的內容
   cout << *a << "*" << *a << "=" << (*a)*(*a) << endl;
   delete a;                             // 釋放指標a所指向的動態記憶體配置區域
   cout << "*a=" << *a << endl; 	     // 印出a所指向位址的內容
   a=NULL;						         // 將a指向NULL

   system("pause");
   return 0;
}
