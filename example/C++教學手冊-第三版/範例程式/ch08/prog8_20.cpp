// prog8_20, ¦r¦ê°}¦C
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i;
   char students[3][15];
   for(i=0;i<3;i++)
   {
      cout << "Input student" << i << "'s name:";
      cin.getline(students[i],15);
   }
   cout << "***OUTPUT***" << endl;
   for(i=0;i<3;i++)
      cout << "students[" << i << "]=" << students[i] << endl;
	
   system("pause");
   return 0;
}
