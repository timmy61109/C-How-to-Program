// prog6_5, ⊿Τ肚ㄧ计
#include <iostream>
#include <cstdlib>
using namespace std;
void myprint(int,char);       	// ㄧ计 
int main(void)
{
   int a=6;
   char ch='%';
   myprint(a,ch);		  	// ㊣璹ㄧ计aじ 
   cout << "Printed!!" << endl;
   system("pause");
   return 0;
}

void myprint(int n,char c) 	// 璹ㄧ计myprint()
{
   int i;
   for(i=1;i<=n;i++)
      cout << c;				// じ
   cout << endl;
   return;
}
