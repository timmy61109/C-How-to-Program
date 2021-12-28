// hw16_15,
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa    // 定義Caaa類別，在此為父類別
{
   protected:
      int num;
   public:
      Caaa()
      {
         num=5;
      }
};

class Cbbb : protected Caaa  // 定義Cbbb類別，繼承自Caaa類別
{
   public:
     void show()
     {
        cout << "num= " << num << endl;
     }
};

class Cccc : public Cbbb  // 定義Cccc類別，繼承自Cbbb類別
{
};

int main(void)
{
   Cccc c;
   c.show();

   system("pause");
   return 0;
}

/* output-------------------------------
num= 5
--------------------------------------*/
