// hw4_17,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   double r,area,pi=3.14159; 
   cout << "請輸入圓的半徑: ";
   cin >> r;
   area=pi*r*r;
   cout << "圓面積為 " << area << endl;
   
   system("pause");
   return 0;
}

/* output----------------
請輸入圓的半徑: 10
圓面積為 314.159
-----------------------*/
