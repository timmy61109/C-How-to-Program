// hw16_11,
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

     void show()
     {
        cout << "num= " << num << endl;
     }
};

class Cbbb : public Caaa  // 定義Cbbb類別，繼承自Caaa類別
{
};

int main(void)
{
   Cbbb b;
   b.show();

   system("pause");
   return 0;
}

/* output-------------------------------
num= 5
--------------------------------------*/
