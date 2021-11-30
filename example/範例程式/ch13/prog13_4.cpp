// prog13_4, 預設的建構元 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                      // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h)   // CWin建構元
     {
        id=i;
        width=w;
        height=h;
        cout << "CWin(char,int,int) 建構元被呼叫了..." << endl;
     }
     CWin(int w,int h)   		// CWin建構元
     {
        id='Z';
        width=w;
        height=h;
        cout << "CWin(int,int) 建構元被呼叫了..." << endl; 
     }
     CWin()   				   // 沒有引數的(預設)建構元
     {
        id='D';
        width=100;
        height=100;
        cout << "預設建構元被呼叫了..." <<endl; 
     }                  
     void show_member(void)  	// 成員函數，用來顯示資料成員的值
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

int main(void)
{
   CWin win1('A',50,40); 	
   CWin win2(80,120); 	
   CWin win3;                    // 此行會呼叫預設建構元
      
   win1.show_member();  
   win2.show_member();
   win3.show_member();
   
   system("pause");
   return 0;
}
