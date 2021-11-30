// prog17_8, 錯誤的範例,虛擬函數與解構元
#include <iostream>
#include <cstdlib>
using namespace std;
class CShape                           // 定義抽象類別CShape
{
   public:
      virtual int area()=0;            // 定義area()為泛虛擬函數
      void show_area()
      { 
         cout << "area = " << area() << endl;
      }  
      ~CShape()   	                   // ~CShape() 解構元 
      {
         cout << "~CShape()解構元被呼叫了..." << endl;
         system("pause");
      }          
};

class CWin : public CShape             // 定義由CShape所衍生出的子類別CWin
{
   protected:
     int width, height;
     
   public:
     CWin(int w=10, int h=10):width(w),height(h){} // CWin()建構元
     
     virtual int area() {return width*height; }
     
     void show_area() {
        cout << "CWin物件的面積 = " << area() << endl;
     } 
     ~CWin()  		                               // ~CWin() 解構元 
     {
        cout << "~CWin()解構元被呼叫了..." << endl;
        system("pause");
     }   
};

class CMiniWin : public CWin           // 定義由CWin所衍生出的子類別CMiniWin
{
   public:     
     CMiniWin(int w,int h):CWin(w,h){} // CMiniWin()建構元
     
     virtual int area() {
        return (int) (0.5*width*height);
     }
     void show_area(){
        cout << "CMiniWin物件的面積 = " << area() << endl;
     }       
     ~CMiniWin()   	                   // ~CMiniWin() 解構元 
     {
        cout << "~CMiniWin()解構元被呼叫了..." << endl;
        system("pause");
     }    
};

int main(void)
{
   CShape *ptr=new CWin(50,60);	
   ptr->show_area();
   cout << "銷毀CWin物件..." << endl;
   delete ptr;
   cout << endl;     
   
   ptr=new CMiniWin(50,50);
   ptr->show_area();
   cout << "銷毀CMiniWin物件..." << endl;
   delete ptr;   
   cout << endl;
    
   CMiniWin m_win(100,100); 
   m_win.show_area();

   system("pause");
   return 0;
}
