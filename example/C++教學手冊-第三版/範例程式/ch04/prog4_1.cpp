// prog4_1, 設定運算子「=」 
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int num=18;    // 宣告整數變數num,並設值為18
   cout << "計算前, num=" << num << endl;	// 印出num的值
   num=num+1;     // 將num加1後再設定給num存放
   cout << "計算後, num=" << num << endl;	// 印出計算後num的值
   system("pause");
   return 0;
}
