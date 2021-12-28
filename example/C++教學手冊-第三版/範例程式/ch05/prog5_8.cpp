// prog5_8, break的使用
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{      
    int i;
    
    for(i=1;i<=10;i++)
    {
       if(i%4==0)
          break;			// i%4為0時即跳出迴圈
       cout << "i=" << i << endl;
    }
    cout << "when loop interruped,i=" << i << endl;
    system("pause");
    return 0;
}
