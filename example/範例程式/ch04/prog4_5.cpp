// prog4_5, 關係運算子
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i;
   cout << "Input an integer:";
   cin >> i;
   if (i>5)	         	                        // 判斷i>5是否成立
      cout << i << ">5成立" << endl;		    // 印出字串
   if (i%2==0) 		                            // 判斷i%2是否等於0
      cout << i << "為偶數" << endl; 			// 印出字串
   if (true)		   	                        // 判斷true是否成立
      cout << "此行永遠會被執行" << endl; 		// 印出字串
   system("pause");
   return 0;
}
