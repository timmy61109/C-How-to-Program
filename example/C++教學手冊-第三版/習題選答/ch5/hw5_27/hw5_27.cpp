// hw5_27,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int month=10;  
   cout << month << "月是";
   switch(month)
   {
      case 1:
      case 2: cout << "寒假" << endl;
            break;
      case 3:
      case 4: 
      case 5: 
      case 6: cout << "下學期" << endl;
            break;
      case 7:
      case 8: cout << "暑假" << endl;
            break;
      case 9: 
      case 10:
      case 11:
      case 12: cout << "上學期" << endl;
            break;
      default:
            cout << "不存在" << endl;;
   }

   system("pause");
   return 0;
}

/* output------
10月是上學期
-------------*/
