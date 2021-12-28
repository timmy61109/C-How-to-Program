// prog11_16, 列舉變數的設值
#include <iostream>
#include <cstdlib>
using namespace std;
enum sports				    // 定義列舉型態
{
   tennis,swimming,baseball,ski
} favorite=ski;      	 	// 宣告列舉變數並設值
int main(void)
{
   cout << "favorite=";    	// 印出列舉變數所對應的內容
   switch(favorite)
   {
      case 0:cout << "tennis" << endl;
   	           break;
      case 1:cout << "swimming" << endl;
               break;
      case 2:cout << "baseball" << endl;
  	           break;
      case 3:cout << "ski" << endl;
   }
   
   system("pause");
   return 0;
}
