// prog11_15, 列舉型態的使用
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   enum mykey	                   // 定義列舉型態
   {   
      left,right,middle
   } mouse;		                   // 宣告列舉型態變數
   int key;
   do	      	                   // 輸入0~2的值
   {
      cout << "Button press?(0)Left (1)Right (2)Middle: ";
      cin >> key;
   } while((key>2)||(key<0));
   mouse=static_cast<mykey>(key);
   switch(mouse)	               // 根據key的值印出字串
   {
      case left:  cout << "Left Button Pressed!" << endl;
                  break;
      case right: cout << "Right Button Pressed!" << endl;
                  break;
      case middle:cout << "Middle Button Pressed!" << endl;
   }
   
   system("pause");
   return 0;
}
