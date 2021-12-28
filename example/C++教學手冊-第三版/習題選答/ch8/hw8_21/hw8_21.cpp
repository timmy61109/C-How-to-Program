// hw8_21,
#include <iostream>
#include <cstdlib>
#include <string> 
using namespace std;
int main(void)
{
   string str1("Time flies");
   string str2(str1);
   string str3(10,'x');
   cout << "str1=" << str1 << endl;
   cout << "str2=" << str2 << endl;
   cout << "str3=" << str3 << endl;
   
   system("pause");
   return 0;
}

/* output---------
str1=Time flies
str2=Time flies
str3=xxxxxxxxxx
----------------*/
