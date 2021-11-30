// prog10_7, 動態記憶體配置
#include <iostream>
#include <cstdlib>
using namespace std;
char *setString(char *);
int main(void)
{
   char *str;
   str=setString("Hello C++!");   // 將欲做動態配置的字串傳入函數
   cout << str << endl;		      // 印出字串內容
   delete[] str;                  // 釋放字串的動態記憶體配置區域

   system("pause");
   return 0;
}

char *setString(char *text)
{
   char *ptr;
   ptr=new char[strlen(text)+1];  // 動態配置後，將位址指定給ptr存放
   strcpy(ptr,text);    	      // 將text的內容複製到ptr
   return ptr;
}
