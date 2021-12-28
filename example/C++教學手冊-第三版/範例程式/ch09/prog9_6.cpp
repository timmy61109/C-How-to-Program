// prog9_6, 錯誤的指標型態
#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
   int a1=100, *ptri;
   double a2=3.2, *ptrf;
   ptri=&a2;		// 錯誤，將int型態的指標指向double型態的變數
   ptrf=&a1; 	    // 錯誤，將double型態的指標指向int型態的變數

   cout << "sizeof(a1)=" << sizeof(a1) << endl;
   cout << "sizeof(a2)=" << sizeof(a2) << endl;
   cout << "a1=" << a1 << ", *ptri=" << *ptri << endl;
   cout << "a2=" << a2 << ", *ptrf=" << *ptrf << endl;
   
   system("pause");
   return 0;
}
