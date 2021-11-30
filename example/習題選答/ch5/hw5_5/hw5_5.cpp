// hw5_5,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
   float height=1.71f;
   float weight=58.2f;
   float bmi;

   bmi=weight/(height*height);
   cout << "身高=" << height << "公尺" << endl;
   cout << "體重=" << weight << "公斤" << endl;
   cout << "BMI=" << bmi << endl;

   if(bmi<18.5)
      cout << "體重過輕" << endl;
   else if(bmi>=24.0)
      cout << "體重過重" << endl;
   else
      cout << "體重標準" << endl;

   system("pause");
   return 0;
}

/* output----------------
身高=1.71公尺
體重=58.2公斤
BMI=19.9036
體重標準

-----------------------*/
