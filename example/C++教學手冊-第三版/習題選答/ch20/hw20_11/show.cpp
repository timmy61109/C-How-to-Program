// show.cpp，用來顯示資料成員
#include "cwin.h"  		// 載入cwin.h標頭檔
#include "cminiwin.h"  // 載入cminiwin.h標頭檔
#include <iostream>
using namespace std;

void CWin::show(void) 	// 定義show()函數
{
   cout << "Window " << id << ":" << endl;
   cout << "Area = " << width*height << endl;
}

void CMiniWin::show(void)
{
   cout << "Mini window " << id << ":" << endl;
   cout << "Area = " << 0.8*width*height << endl;
}
