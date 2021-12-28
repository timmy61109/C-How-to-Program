//prog19_7, 樣板的使用範例(引數型態不同時)
#include <iostream>   
#include <cstdlib>
using namespace std;
template <class T1, class T2>    	// 定義函數樣板
double average(T1 a,T2 b) // 定義average()，可接收T1與T2型態的變數
{
   cout << "sizeof(a)= " << sizeof(a) << ", ";
   cout << "sizeof(b)= " << sizeof(b) << endl;   
   return (double)(a+b)/2;   		// 傳回變數a,b的平均值
}

int main(void)
{
   cout << "average(3,4.2)= " << average<int,double>(3,4.2) << endl;
   cout << "average(5.7,12)= " <<  average<double,int>(5.7,12)  << endl;

   system("pause");
   return 0;
}
