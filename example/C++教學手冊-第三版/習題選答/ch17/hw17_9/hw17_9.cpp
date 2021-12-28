// hw17_9,
#include <iostream>
#include <cstdlib>
using namespace std;
class CMath
{
   public:

     void show()
     {
       cout << "ans=" << compute() << endl;
     }
     virtual int compute()=0;
};

class Cadd : public CMath
{
   public:
   int num1,num2;

   Cadd(int m,int n):num1(m),num2(n){}

   int compute()
   {
      return num1+num2;
   }
   void show()
   {
       cout << "add(" << num1 << "," << num2 << ")= ";
       cout << compute() << endl;
   }
};

int main(void)
{
   Cadd a1(2,3);
   a1.show();

   system("pause");
   return 0;
}

/* output-----------------
add(2,3)= 5
------------------------*/
