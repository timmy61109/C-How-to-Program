// prog8_19, ¦r¦ê°}¦C
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i;
   char name[3][10]={"David","Jane Wang","Tom Lee"};
   for(i=0;i<3;i++)		               // ¦L¥X¦r¦ê°}¦C¤º®e
      cout << "name[" << i << "]=" << name[i] << endl;
   cout << endl;
   for(i=0;i<3;i++)		               // ¦L¥X¦r¦ê°}¦C¤¸¯Àªº¦ì§}
   {
      cout << "address of name[" << i << "]=" << &name[i] << endl;
      cout << "address of name[" << i << "][0]=";
      cout << (name+i) << endl << endl;
   }
	
   system("pause");
   return 0;
}
