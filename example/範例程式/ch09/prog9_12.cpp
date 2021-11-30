// prog9_12, ㄧ计夹ㄏノ 
#include <iostream>
#include <cstdlib>
using namespace std;
int square(int);            // ﹚竡square()ㄧ计
int main(void)
{
   int (*pf)(int);          // ﹚竡ㄧ计夹pf
   pf=square;               // ㄏㄧ计夹pfsquare()
   cout << "square(5)=" << (*pf)(5) << endl;        // square(5)
   system("pause");
   return 0;
}

int square(int a)           // 璹ㄧ计square(), 璸衡キよ 
{
   return (a*a);
}
