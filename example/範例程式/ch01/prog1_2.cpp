// prog1_2, 本書程式碼所使用的慣例
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int a;	       	// 宣告整數變數a
   cout << "How many dogs do you have? ";
   cin >> a;      	// 由鍵盤輸入整數，並指定給變數a存放
   cout << "You have " << a << " dogs!" << endl; 
   system("pause");
   return 0;
}
