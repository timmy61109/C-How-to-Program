// prog13_14, 「靜態成員函數」的使用
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    				       // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     static int num;   		       // 靜態資料成員
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h)  
     {
        num++;
     }
     CWin()
     {
        num++;     
     }
     static void count(void)       // 靜態成員函數
     {
        cout << "已建立 " << num << " 個物件了..." << endl;
     }
};

int CWin::num=0;     	           // 設定靜態資料成員的初值  

int main(void)
{
   CWin::count();    	           // 用類別呼叫靜態成員函數

   CWin win1('A',50,40); 	
   CWin win2('B',60,80);
   CWin::count();                  // 用類別呼叫靜態成員函數

   CWin my_win[5];
   CWin::count();                  // 用類別呼叫靜態成員函數
     
   system("pause");
   return 0;
}
