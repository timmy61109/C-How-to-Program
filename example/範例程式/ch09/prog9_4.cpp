// prog9_4, 指標變數的大小
#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
   int *ptri;		      // 宣告指向整數的指標ptri
   char *ptrc; 		      // 宣告指向字元的指標ptrc
      
   cout << "sizeof(ptri)=" << sizeof(ptri) << endl;
   cout << "sizeof(ptrc)=" << sizeof(ptrc) << endl;
   cout << "sizeof(*ptri)=" << sizeof(*ptri) << endl;
   cout << "sizeof(*ptrc)=" << sizeof(*ptrc) << endl;
   
   system("pause");
   return 0;
}
