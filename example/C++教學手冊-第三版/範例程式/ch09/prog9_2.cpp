// prog9_2, 指標變數的宣告
#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
   int *ptr,num=20;	  	     // 宣告變數num與指標變數ptr
   
   ptr=&num;			  	 // 將num的位址設給指標ptr存放
   cout << "num=" << num << ", &num=" << &num << endl;
   cout << "*ptr=" << *ptr << ", ptr=" << ptr;
   cout << ", &ptr=" << &ptr << endl;
   
   system("pause");
   return 0;
}
