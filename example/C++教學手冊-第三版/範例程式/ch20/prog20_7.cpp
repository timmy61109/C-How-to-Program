//prog20_7, 檔案分割的練習 - 完整的程式碼 
#include <iostream>
#include <cstdlib>
using namespace std;

class CWin    			      // 定義視窗類別CWin
{ 
   protected:
     char id;
     int width;   
     int height;
   public:
     CWin(char ch, int w, int h):id(ch),width(w),height(h){}
     void show(void);    	  // 成員函數area()的原型
};

void CWin::show(void) 	      // 定義show()函數
{                 
   cout << "Window " << id << ":" << endl; 
   cout << "Area = " << width*height << endl;  
}
 
int main(void)   		      // 主程式main()
{
   CWin win1('A',50,60); 
   win1.show();
   
   system("pause");
   return 0;
}
