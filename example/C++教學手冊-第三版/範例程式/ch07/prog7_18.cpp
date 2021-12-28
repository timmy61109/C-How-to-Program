// prog7_18, 命令列引數的使用
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
   int i ;
   cout << "The value of argc is " << argc;  // 印出命令列引數的內容
   cout << endl;
   for(i=0;i<argc;i++)
      cout << "argv[" << i << "]=" << argv[i] << endl;
   system("pause");
   return 0;
}
