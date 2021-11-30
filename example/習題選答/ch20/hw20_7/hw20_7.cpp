// hw20_7.cpp,
#include <cstdlib>
#include <iostream>
#include "cwin.h"
#include "ctextwin.h"
using namespace std;
int main(void)
{
   CTextWin tx1('A',"Hello C++");	// 建立子類別的物件
   CTextWin tx2(tx1);

   tx1.show_member();
   tx2.show_member();

   cout << "更改tx1物件的成員之後..." << endl;
   tx1.set_member('B',"Welcome C++");

   tx1.show_member();
   tx2.show_member();

   system("pause");
   return 0;
}

/* output-----------------------------
CWin()建構元被呼叫了...
CTextWin()建構元被呼叫了...
CWin()拷貝建構元被呼叫了...
CTextWin()拷貝建構元被呼叫了...
Window A: text = Hello C++
Window A: text = Hello C++
更改tx1物件的成員之後...
Window B: text = Welcome C++
Window A: text = Hello C++
請按任意鍵繼續 . . .
CTextWin()解構元被呼叫了...
請按任意鍵繼續 . . .
CWin()解構元被呼叫了...
請按任意鍵繼續 . . .
CTextWin()解構元被呼叫了...
請按任意鍵繼續 . . .
CWin()解構元被呼叫了...
請按任意鍵繼續 . . .
------------------------------------*/
