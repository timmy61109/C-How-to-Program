//hw20_9,
#include <iostream>
#include <cstdlib>
#define STR "Hello C++"  		// 定義 STR 為"Hello C++"字串
using namespace std;
int main(void)
{
   #ifndef STR              		// 如果STR沒有被定義
      cout << "STR not defined" << endl;
   #else               			   // STR有被定義
      cout << STR << endl;
   #endif
   
   system("pause");
   return 0;
}

/* output-------------------------------
Hello C++
--------------------------------------*/
