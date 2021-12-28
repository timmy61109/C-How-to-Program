// prog13_9, 建立物件陣列 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                      // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i='D',int w=100,int h=100):id(i),width(w),height(h)  
     {
        cout << "建構元被呼叫了..." << endl; 
     }
     void show_member(void)  	// 成員函數，用來顯示資料成員的值
     {
        cout << "Window " << id << ": ";
        cout<< "width=" << width << ", height=" << height << endl;
     }
};

int main(void)
{
   CWin win1('A',50,40); 	
   CWin my_win[3];   			// 建立3個CWin型態的物件
 
   win1.show_member();  	   	// 以win1物件呼叫show_member()
   my_win[2].show_member(); 	// 以my_win[2]物件呼叫show_member()
        
   system("pause");
   return 0;
}
