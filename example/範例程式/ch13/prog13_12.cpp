// prog13_12, public「靜態資料成員」的使用 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    			    // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
    
   public:  
     static int num;   	    // 將靜態資料成員num宣告為public
     CWin(char i,int w,int h):id(i),width(w),height(h)
     {
        num++;    			// 將靜態資料成員的值加1
     }
     CWin()
     {
        num++;    			// 將靜態資料成員的值加1
     }
};

int CWin::num=0;    		// 設定靜態資料成員num的初值

int main(void)
{
   CWin win1('A',50,40); 	
   CWin win2('B',60,80);
   cout << "已建立 " << CWin::num << " 個物件了..." << endl;

   CWin my_win[4];
   cout << "已建立 " << CWin::num << " 個物件了..." << endl;  
   
   system("pause");
   return 0;
}
