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
      cout << stu[i] << " 的成績: ";
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
   cout << endl << endl << "平均=" << setw(4) << sum/5 << endl;
         
   system("pause");
   return 0;
}

/* output-------------------------------------------
Richard 的成績: 85
Amy Lee 的成績: 90
Paul Yang 的成績: 78
Mary Wang 的成績: 95
Jean Fen 的成績: 70

Richard  Amy Lee  Paul Yang  Mary Wang  Jean Fen
   85        90        78        95        70

平均=83.6
---------------------------------------------------*/
