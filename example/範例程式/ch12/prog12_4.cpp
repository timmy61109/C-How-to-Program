// prog12_4, 物件與類別所佔的位元組
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    	// 定義視窗類別CWin
{
   public:   	// 設定資料成員為公有
     char id;
     int width;   
     int height;
};
int main(void)
{
   CWin win1;   	// 宣告CWin類別型態的變數win1

   cout << "sizeof(win1) = " << sizeof(win1) << " bytes" << endl;
   cout << "sizeof(CWin) = " << sizeof(CWin) << " bytes" << endl;
   
   system("pause");
   return 0;
}
