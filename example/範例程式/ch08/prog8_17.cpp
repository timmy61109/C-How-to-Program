// prog8_17, 字串的運算 
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(void)
{
   string first="Junie";
   string last="Hong";
   cout << "full name=" << first+" "+last << endl;
   first+=" ";          // first加上" " 
   first+=last;         // first=first+last
   cout << "full name=" << first << endl;
   
   system("pause");
   return 0;
}
