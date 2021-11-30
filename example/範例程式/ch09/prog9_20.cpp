// prog9_20, 以指標變數指向字串
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char name[20];
   char *ptr="How are you?";		// 將指標指向字串"How are you?"

   cout << "What's your name? ";	
   cin.getline(name,20);			                // 輸入字串
   cout << "Hi, " << name << ", " << ptr << endl;	// 輸出
    
   system("pause");
   return 0;
}
