// hw14_3,
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa
{
   public:
     Caaa();
    ~Caaa();
};

Caaa::Caaa()    // 建構元
{
   cout << "constructor called" << endl;
}

Caaa::~Caaa()   // 解構元
{
   cout << "destructor called " << endl;
   system("pause");
}

int main(void)
{
   Caaa obj;

   system("pause");
   return 0;
}

/* output------------------------
constructor called
請按任意鍵繼續 . . .
destructor called
請按任意鍵繼續 . . .
-------------------------------*/
