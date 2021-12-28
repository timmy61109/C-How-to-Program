// hw17_3,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                      // 定義CWin類別，在此為父類別
{
   protected:
     char id;
     int width, height;
   public:
     CWin(char i='D',int w=10, int h=10)   // 父類別的建構元
     {
        id=i;
        width=w;
        height=h;
     }
      void show_area()          // 父類別的show_area()函數
      {
         cout << "Window " << id << ", area = " << area() << endl;
      }
      virtual int area()        // 父類別的area()函數
      {
         return width*height;
      }
};

class CMiniWin : public CWin    // 定義子類別CMiniWin
{
   public:
     CMiniWin(char i,int w,int h):CWin(i,w,h){}  // 子類別的建構元

     virtual int area()         // 子類別的area()函數
     {
        return (int)(0.8*width*height);
     }
};

int main(void)
{
   CWin win('A',70,80);		    // 建立子類別的物件
   CMiniWin m_win('B',50,60);

   CWin *ptr=NULL;       		// 宣告指向基底類別(父類別)的指標

   ptr=&win;				// 將ptr指向父類別的物件win
   cout << "Win A: " << ptr->area() << endl;

   ptr=&m_win;			// 將ptr指向子類別的物件m_win
   cout << "Win M: " << ptr->area() << endl;;

   system("pause");
   return 0;
}

/* output--------------
Win A: 5600
Win M: 2400
---------------------*/
