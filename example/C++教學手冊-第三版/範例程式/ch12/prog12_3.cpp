// prog12_3, 建立物件與資料成員的存取
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		// 定義視窗類別CWin
{
   public:   		// 設定資料成員為公有
     char id;
     int width;   
     int height;
};
int main(void)
{
   CWin win1,win2;   // 宣告CWin類別型態的變數win1與win2 
   
   win1.id='A';
   win1.width=50;		
   win1.height=40;
   
   win2.id='B';
   win2.width=win1.width+20; 	
   win2.height=win1.height+10;	
   
   cout << "Window " << win2.id << ":" << endl;
   cout << "win2.width = " << win2.width << endl;
   cout << "win2.height = " << win2.height << endl;   
   
   system("pause");
   return 0;
}
