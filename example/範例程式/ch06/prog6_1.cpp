// prog6_1, 虏虫ㄧ计
#include <iostream>
#include <cstdlib>
using namespace std;
void star(void); 	                    // ㄧ计
int main(void)
{
   star();			                    // ㊣璹ㄧ计琍腹
   cout << "6*6=" << 6*6 << endl;       // 6キよ 
   star();			                    // ㊣璹ㄧ计琍腹
   system("pause");
   return 0;
}

void star(void)		                    // 璹ㄧ计star() 
{
   int j;
   for(j=1;j<=8;j++)
      cout << "*";	                    // *琍腹
   cout << endl;
   return;
}
