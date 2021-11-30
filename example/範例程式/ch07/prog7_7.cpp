// prog7_7, ま计计ぃㄧ计更 
#include <iostream>
#include <cstdlib>
using namespace std;
void print(void);                  // 更よΑㄧ计
void print(int);
void print(char,int);
int main(void)
{
   cout << "calling print(), ";
   print();
   cout << "calling print(8), ";
   print(8);
   cout << "calling print('+',3), ";
   print('+',3);
   system("pause");
   return 0;
}

void print(void)   			       // ⊿Τま计print()5*
{
   print(5);					   // ㊣26~33︽print()肚俱计5
   return;
}

void print(int a)			       // Τま计print()a*
{
   int i;
   for(i=0;i<a;i++)
      cout << "*";
   cout << endl;
   return; 
}

void print(char ch,int a)		   // Τま计print()ach
{
   int i;
   for(i=0;i<a;i++)
      cout << ch;
   cout << endl; 
   return;
}
