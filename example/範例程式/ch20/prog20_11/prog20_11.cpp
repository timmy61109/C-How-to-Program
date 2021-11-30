// prog20_11.cpp 主程式的部分
#include <iostream>
#include <cstdlib>
#include "cwin.h"        			// 載入cwin.h標頭檔
#include "cminiwin.h"   			// 載入cminiwin.h標頭檔
using namespace std;

int main(void)
{
   CWin win1('A',50,60);          	// 建立win1物件
   CMiniWin m_win('M',40,50);    	// 建立m_win物件
   
   win1.show();              		// 以win1物件呼叫show()
   m_win.show();			 		// 以m_win物件呼叫show()

   system("pause");
   return 0;
}
