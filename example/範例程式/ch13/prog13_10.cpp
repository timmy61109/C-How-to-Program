// prog13_10, 傳遞物件陣列到函數裡
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                  // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     void set_member(char i,int w,int h)
     {
        id=i;
        width=w;
        height=h;
     }
     int area(void) 
     {
        return width*height;
     }
     friend void largest(CWin [], int);  	// 友誼函數的原型
};

void largest(CWin win[], int n)   		    // 定義友誼函數largest
{
   int max=0,iw;
   for(int i=0; i<n; i++)
      if(win[i].area()>max)			        // 判別面積是否比max還大
      {
          iw=i;				
          max=win[i].area();
      }
   cout << "largest window= " << win[iw].id << endl;    // 印出id成員
}       

int main(void)
{
   CWin win[3];
   
   win[0].set_member('A',60,70);
   win[1].set_member('B',40,60);   
   win[2].set_member('C',80,50);    
   
   largest(win,3);                          // 呼叫largest()函數
      
   system("pause");
   return 0;
}
