// prog5_1, if-else敘述
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{      
    int num=42;
	 if(num%3==0 && num%7==0)
	    cout << num << "可以被3與7整除" << endl;
    else
       cout << num << "不能被3與7整除" << endl;
    system("pause");
    return 0;
}
