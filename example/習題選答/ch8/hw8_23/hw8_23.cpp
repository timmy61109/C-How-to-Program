// hw8_23,
#include <iostream>
#include <cstdlib>
#include <string> 
using namespace std;
int main(void)
{
   string str1,str2;
   
   str1.assign("Practice makes perfect");
   str2.assign("Haste makes waste");   
   cout << "str1=" << str1 << endl;
   cout << "str2=" << str2 << endl;
   if(str1.compare(str2)==0)
      cout << "str1等於str2" << endl;
   else
      cout << "str1不等於str2" << endl;
      
   system("pause");
   return 0;
}

/* output---------------------
str1=Practice makes perfect
str2=Haste makes waste
str1不等於str2
----------------------------*/
