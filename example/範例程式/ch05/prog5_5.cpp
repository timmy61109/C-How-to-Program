// prog5_5, while迴圈
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{      
    int num,i=1,sum=0;
    cout << "請輸入整數值:";
    cin >> num; 
    while(i<=num)
    {
       sum+=i;
       i++;
    }
    cout << "1+2+...+" << num << "=" << sum << endl;
    system("pause");
    return 0;
}
