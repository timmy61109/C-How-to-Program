// prog13_5,建構元引數的預設值 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                  // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i='D',int w=100,int h=100)   // 引數的預設值
     {
        id=i;
        width=w;
        height=h;
     }
     void show_member(void)  	            // 成員函數，用來顯示資料成員的值
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

int main(void)
{
   CWin win1('A',50,40); 		            // 自行設定所有的資料成員
   CWin win2('B',80);			            // 只有height成員使用預設值
   CWin win3; 				                // 所有的值都使用預設值	
 
   win1.show_member();
   win2.show_member();
   win3.show_member();
        
   system("pause");
   return 0;
}
