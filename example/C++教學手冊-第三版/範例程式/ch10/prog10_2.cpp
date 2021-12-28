// prog10_2, 印出陣列的位址
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int num[3][4];					      // 宣告3×4的二維陣列num

   cout << "num=" << num << endl;		  // 印出雙重指標num的值
   cout << "&num=" << &num << endl; 	  // 印出雙重指標num的位址
   cout << "*num=" << *num << endl;       // 印出雙重指標num所指向之指標的值

   cout << "num[0]=" << num[0] << endl;	  // 印出指標常數num[0]的值
   cout << "num[1]=" << num[1] << endl;   // 印出指標常數num[1]的值
   cout << "num[2]=" << num[2] << endl;	  // 印出指標常數num[2]的值

   cout << "&num[0]=" << &num[0] << endl; // 印出指標常數num[0]的位址
   cout << "&num[1]=" << &num[1] << endl; // 印出指標常數num[1]的位址
   cout << "&num[2]=" << &num[2] << endl; // 印出指標常數num[2]的位址

   system("pause");
   return 0;
}
