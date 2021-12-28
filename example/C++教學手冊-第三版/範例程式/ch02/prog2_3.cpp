// prog2_3, endl與"\n"的使用
#include <iostream>   	    // 含括iostream檔案
#include <cstdlib>		    // 含括cstdlib檔案
using namespace std;
int main(void)
{
   cout << "I love C++." << endl << "You love C++, too.\n";
   cout << "We all love C++." << "\n";

   system("pause");
   return 0;
}
