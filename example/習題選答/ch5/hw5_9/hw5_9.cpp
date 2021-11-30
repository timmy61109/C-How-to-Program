// hw5_9,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   int amount=12500;
   float pay=(float)amount;

   cout << "消費額為" << amount << endl;
   if(amount>=1000 && amount<3000)     
      pay=amount*0.95f;
   else if(amount>=3000 && amount<5000)
      pay=amount*0.92f;
   else if(amount>=5000 && amount<10000)
      pay=amount*0.9f;
   else if(amount>=10000)
      pay=amount*0.85f;
   
   cout << "應支付的金額為" << pay << endl;

   system("pause");
   return 0;
}

/* output----------------
消費額為12500
應支付的金額為10625
-----------------------*/
