// prog13_2, 將建構元的定義移到類別外面 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                          // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char,int,int);   	        // CWin建構元的原型

     void show_member(void)  	    // 成員函數，用來顯示資料成員的值
     {
        cout<< "Window " << id << ": ";
        cout<< "width=" << width << ", height=" << height << endl;
     }
};

CWin::CWin(char i,int w,int h)   	// CWin建構元的定義
{
   id=i;
   width=w;
   height=h;
   cout << "CWin 建構元被呼叫了..." <<endl;
}

int main(void)
{
   CWin win1('A',50,40); 			// 宣告win1物件並設定初值
   CWin win2('B',60,70); 			// 宣告win2物件並設定初值
      
   win1.show_member();  
   win2.show_member();
     
   system("pause");
   return 0;
}
