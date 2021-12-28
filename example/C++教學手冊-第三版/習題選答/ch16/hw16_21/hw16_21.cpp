// hw16_21,
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa    // 定義Caaa類別，在此為父類別
{
   public:
     int num1,num2;
     void display()
     {
        cout << "printed from Caaa class" << endl;
     }
};

class Cbbb : public Caaa  // 定義Cbbb類別，繼承自Caaa類別
{
   public:
      void set_num(int a, int b)
      {
         num1=a;
         num2=b;
      }
      void show()
      {
         cout << "num1= " << num1;
         cout << ", num2= " << num2 << endl;
      }
      void display()
      {
          cout << "printed from Cbbb class" << endl;
       }
};

int main(void)
{
   Caaa obj1;
   Cbbb obj2;
   obj1.display();
   obj2.display();

   system("pause");
   return 0;
}

/* output-------------------------------
printed from Caaa class
printed from Cbbb class
--------------------------------------*/
