// prog13_13, private「靜態資料成員」的使用 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                         // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     static int num;    	       // 將靜態資料成員宣告為private
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h)  
     {
        num++;    			       // 將靜態資料成員的值加1
     }
     CWin()
     {
        num++;    			       // 將靜態資料成員的值加1
     }
     void count(void)   	       // 成員函數，可讀取private靜態資料成員
     {
        cout << "已建立 " << num << " 個物件了..." << endl;
     }
};

int CWin::num=0;   		           // 設定靜態資料成員num的初值

int main(void)
{
   CWin win1('A',50,40); 	
   CWin win2('B',60,80);
   win1.count();     		       // 以win1物件呼叫count

   CWin my_win[4];
   win2.count();     		       // 也可用win2物件呼叫count
     
   system("pause");
   return 0;
}
