// hw6_3,
#include <iostream>
#include <cstdlib>
using namespace std;
void repeat(int);
int main(void)
{     
   repeat(5);   

   system("pause");
   return 0;
}

void repeat(int k)
{
   for(int i=1;i<=k;i++)
      cout << "Hello, C++" << endl;
} 

/* output--------------------------------
Hello, C++
Hello, C++
Hello, C++
Hello, C++
Hello, C++
---------------------------------------*/
