//prog20_9, 使用#ifdef、#else與#endif指令
#include <iostream>
#include <cstdlib>
#define STR "Hello C++"  		// 定義 STR 為"Hello C++"字串

using namespace std;
int main(void)
{
   #ifdef STR              		// 如果STR有被定義
      cout << STR << endl;
   #else               			// STR沒有被定義
      cout << "STR not defined" << endl;
   #endif
   system("pause");
   return 0;
}
