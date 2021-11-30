// prog2_1, 簡單的C++程式
#include <iostream>   	        // 含括iostream檔案
#include <cstdlib>		        // 含括cstdlib檔案
using namespace std;            // 使用std名稱空間
int main(void)
{
   int num;		                // 宣告整數num
   num=3;		                // 將num設值為3
   cout << "I have " << num << " apples."<< endl; //印出字串及變數內容
   cout << "You have " << num << " apples, too." << endl;
   system("pause");
   return 0;
}
