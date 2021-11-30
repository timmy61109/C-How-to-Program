// hw8_27,
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;
int main(void)
{
   int i,score[5]={0};
   double sum=0.0;
   string stu[5]={"Richard","Amy Lee","Paul Yang",
                  "Mary Wang","Jean Fen"};
   for(i=0;i<5;i++)
   {
      cout << stu[i] << " ªº¦¨ÁZ: ";
      cin  >> score[i];
   }
   cout << endl;
   for(i=0;i<5;i++)
      cout << stu[i] << "  ";
   cout << endl;    
   for(i=0;i<5;i++)
   {
      cout << "  " << setw(3) << score[i] << "     ";
      sum=sum+score[i];
   }
   cout << endl << endl << "¥­§¡=" << setw(4) << sum/5 << endl;
         
   system("pause");
   return 0;
}

/* output-------------------------------------------
Richard ªº¦¨ÁZ: 85
Amy Lee ªº¦¨ÁZ: 90
Paul Yang ªº¦¨ÁZ: 78
Mary Wang ªº¦¨ÁZ: 95
Jean Fen ªº¦¨ÁZ: 70

Richard  Amy Lee  Paul Yang  Mary Wang  Jean Fen
   85        90        78        95        70

¥­§¡=83.6
---------------------------------------------------*/
