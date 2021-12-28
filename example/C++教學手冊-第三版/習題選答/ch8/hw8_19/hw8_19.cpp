// hw8_19,
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(void)
{
   string str;
   int i=0,A=0,E=0,I=0,O=0,U=0,other=0;
   cout << "請輸入字串: ";
   getline(cin,str);
   cout << "輸入的字串為 " << str << endl;
   while(str[i]!= '\0')
   {
      switch(str[i])
      {
         case 'A':
         case 'a':A=A+1;
                  break;
         case 'E':
         case 'e':E=E+1;
                  break;
         case 'I':
         case 'i':I=I+1;
                  break; 
         case 'O':
         case 'o':O=O+1;
                  break;
         case 'U':
         case 'u':U=U+1;
                  break;
         default : other++;
      }
      i++;
   }
   cout <<"出現A,E,I,O,U字母及其它字元如下:" << endl; 
   cout << "A,a=" << A << endl;
   cout << "E,e=" << E << endl;
   cout << "I,i=" << I << endl; 
   cout << "O,o=" << O << endl;
   cout << "U,u=" << U << endl;
   cout << "other=" << other << endl;

   system("pause");
   return 0;
}

/* output--------------------------------
請輸入字串: Rome was not built in a day
輸入的字串為 Rome was not built in a day
出現A,E,I,O,U字母及其它字元如下:
A,a=3
E,e=1
I,i=2
O,o=2
U,u=1
other=18
---------------------------------------*/
