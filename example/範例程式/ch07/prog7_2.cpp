// prog7_2, 參照的認識 
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int num=5;
   int &rm=num;		                   // 宣告rm為num的參照
   
   rm=rm+10;			               // 參照rm加10
   cout << "num=" << num << endl;	   // 印出num的值
   cout << "rm=" << rm << endl; 	   // 印出rm的值
   system("pause");
   return 0;
}
