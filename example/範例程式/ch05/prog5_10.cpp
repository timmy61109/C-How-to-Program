// prog5_10, switch敘述
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{      
    int month=5;
     
    cout << month << "月是";
    switch(month)
    {
       case 3:
       case 4:
       case 5: cout << "春天" << endl;
               break;
       case 6:
       case 7:
       case 8: cout << "夏天" << endl;
               break;
       case 9:
       case 10:
       case 11:cout << "秋天" << endl;
               break;
       case 12:
       case 1:
       case 2:cout << "冬天" << endl;
              break;
       default:
              cout << "不存在!" << endl;
    }
    system("pause");
    return 0;
}
