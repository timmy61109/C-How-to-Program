// prog17_6, 抽象類別的實作
#include <iostream>
#include <cstdlib>
using namespace std;
class CShape                    // 定義抽象類別CShape
{
   public:
      virtual int area()=0;     // 定義area()，並令之為0來代表它是泛虛擬函數
   
      void show_area()     	    // 定義成員函數show_area()
      {
         cout << "area = " << area() << endl;
      }   
};

class CWin : public CShape  	// 定義由CShape所衍生出的子類別CWin
{
   protected:
     int width, height;
     
   public:
     CWin(int w=10, int h=10)	// CWin()建構元
     {
        width=w;
        height=h;   
     }
     virtual int area()   
     {
        return width*height;
     }
};

class CCirWin : public CShape	// 定義由CShape所衍生出的子類別CCirWin
{
   protected:
     int radius;
     
   public:
     CCirWin(int r=10)   		// CCirWin()建構元
     {
        radius=r;
     }
     virtual int area()
     {
        return (int) (3.14*radius*radius);
     }
     void show_area()
     {
        cout << "CCirWin物件的面積 = " << area() <<endl;
     }   
};

int main(void)
{
   CWin win1(50,60);		    // 建立CWin類別的物件win1
   CCirWin win2(100);			// 建立CCinWin類別的物件win2
  
   win1.show_area();			// 用win1呼叫show_area();
   win2.show_area();	  		// 用win2呼叫show_area();

   system("pause");
   return 0;
}
