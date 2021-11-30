// hw20_3, ¨Ï¥ÎusingÃöÁä¦r
#include <iostream>
#include <cstdlib>

namespace name1
{
   int var=5;
}

using namespace std;
int main(void)
{
   int var=10;
   cout << "in name1, var=" << name1::var << endl;

   system("pause");
   return 0;
}

/* output-------------------------------
in name1, var=5
--------------------------------------*/
