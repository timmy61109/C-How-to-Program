// prog8_18, 字串函數的練習 
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(void)
{
   string str1="Hank ";
   string str2="Wang";
   string str3=", 2010/12/25";
   cout << "str1=" << str1 << ", str2=" << str2;
   cout << ", str3=" << str3 << endl;
   cout << "執行str1.append(str2)" << endl;
   str1.append(str2);   
   cout << "str1=" << str1 << endl;
   cout << "執行str1.append(str3,0,6)" << endl;
   str1.append(str3,0,6);
   cout << "str1=" << str1 << endl;
   cout << "取出str1第5個字元之後的子字串--> ";
   cout << str1.substr(5) << endl;   
   cout << "str1長度=" << str1.length() << endl;
    
   system("pause");
   return 0;
}
