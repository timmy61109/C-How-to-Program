// hw7_21,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
   int length=atoi(argv[1]);
   int width=atoi(argv[2]);
   cout << "長方形的長=" << length << endl;
   cout << "長方形的寬=" << width << endl;
   cout << "長方形面積=" << length*width << endl;
      
   system("pause");
   return 0;
}

/* output---------------
C:\C++>hw7_21 8 4
長方形的長=8
長方形的寬=4
長方形面積=32
----------------------*/
