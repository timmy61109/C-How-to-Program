// hw12_3,
#include <iostream>
#include <cstdlib>
using namespace std;
class my_data               //宣告一my_data的類別
{
   public:                  //宣告為age,weight為公有成員
      int age;
      int weight;
};

int main(void)
{
   my_data a;              //宣告my_data類別變數為a
   a.age=18;               //將類別變數a裡的age及weight設值
   a.weight=57;
   cout << "age= " << a.age << endl;     //印出類別變數age及weight的值
   cout << "weight= " << a.weight << endl;
   system("pause");
   return 0;
}

/* output------
age= 18
weight= 57
-------------*/
