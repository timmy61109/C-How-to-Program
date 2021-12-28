// show.cpp，用來顯示資料成員 
#include "cwin.h"  			// 載入cwin.h標頭檔
#include <iostream>
using namespace std;

void CWin::show(void) 		// 定義show()函數
{                 
   cout << "Window " << id << ":" << endl; 
   cout << "Area = " << width*height << endl;  
}
