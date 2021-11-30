// hw5_7,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int num;
   cout << "叫块俱计: ";
   cin >> num;
   
   if(num%2==0)
      cout << num << "琌案计" << endl;
   else
      cout << num << "琌计" << endl;

   system("pause");
   return 0;
}

/* output----------------
叫块俱计: 8
8琌案计
-----------------------*/
