// prog11_6, 將結構欄位分別傳遞到函數
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct mydata	                    // 定義結構
{
   string name;
   int math;
   int eng;
};
float avg(int,int);                 // 函數原型 
int main(void)
{
   struct mydata num={"Alice",71,80};                   // 宣告結構變數
   cout << num.name << "'s Math score=" << num.math;    // 印出結構變數內容
   cout << endl << "English score=" << num.eng << endl;
   cout << "average=" << avg(num.math,num.eng) << endl;
   
   system("pause");
   return 0;
}

float avg(int a,int b)	            // 自訂函數avg()
{	
   return (float)(a+b)/2;
}
