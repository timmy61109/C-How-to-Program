// prog17_5, 修正prog17_4的錯誤
#include <iostream>
#include <cstdlib>
using namespace std;

class CWin                                       // 定義CWin類別，在此為父類別
{
   protected:
     char id;
     int width, height;
   public:
     CWin(char i='D',int w=10, int h=10)         // 父類別的建構元
     {
        id=i;
        width=w;
        height=h;   
     }
      void show_area()                           // 父類別的show_area()函數
      {
         cout << "Window " << id << ", area = " << area() << endl;
      }
      virtual int area()                         // 父類別的area()函數
      {
         return width*height;
      }
};

class CMiniWin : public CWin                     // 定義子類別CMiniWin
{
   public:     
     CMiniWin(char i,int w,int h):CWin(i,w,h){}  // 子類別的建構元
     
     virtual int area()    	                     // 子類別的area()函數
     {
        return (int)(0.8*width*height); 
     }
};

int main(void)
{
   CWin *ptr=new CWin('A',70,80);	// 設定ptr指向CWin類別的物件
   CMiniWin m_win('B',50,60);
  
   ptr->show_area();				// 以ptr呼叫show_area()函數
   delete ptr;        				// 先釋放ptr所指向的記憶空間
   
   ptr=&m_win;					// 再將ptr指向子類別的物件m_win
   ptr->show_area();	  			// 以ptr呼叫show_area()函數
   
   system("pause");
   return 0;
}
