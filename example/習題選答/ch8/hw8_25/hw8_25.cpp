// hw8_25,
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(void)
{
   int i;
   string a[]={"January","February","March","April",
               "May","June","July","August","September",
               "October","November","December"};
   cout << "輸入月份:";
   cin  >> i;
   cout << a[i-1] << endl;
   
   system("pause");
   return 0;
}

/* output----
輸入月份:7
July
-----------*/
