// prog5_2, 條件運算子?:的使用
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{      
    int a=5,b=12,min;
    min=(a<b)?a:b;		// 利用條件運算子判斷a與b何者為小
    cout << "a=" << a << ", b=" << b << endl;
    cout << min << "是較小的數" << endl; 
    
    system("pause");
    return 0;
}
