// hw5_25,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int day=7;  
   cout << "day=" << day << endl;
   switch(day)
   {
      case 1: cout << "星期一" << endl;
            break;
      case 2: cout << "星期二" << endl;
            break;
      case 3: cout << "星期三" << endl;
            break;
      case 4: cout << "星期四" << endl;
            break;
      case 5: cout << "星期五" << endl;
            break;
      case 6: cout << "星期六" << endl;
            break;
      case 7: cout << "星期日" << endl;
            break; 
      default:
            cout << "不存在" << endl;;
   }

   system("pause");
   return 0;
}

/* output------
day=7
星期日
-------------*/
