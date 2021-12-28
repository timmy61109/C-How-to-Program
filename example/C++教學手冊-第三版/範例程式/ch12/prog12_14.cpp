// prog12_14, 利用公有函數存取私有成員
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    				             // 定義視窗類別CWin
{
   private:
     char id;				             // 私有資料成員
     int width;   			             // 私有資料成員
     int height;  			             // 私有資料成員
   
   public:  
     int area(void)   			         // 公有成員函數area()
     {                 
         return width*height;
     }
     void show_area(void)    	         // 公有成員函數show_area()
     {
        cout<<"Window "<< id <<", area=" << area() << endl;
     }
     void set_data(char i,int w,int h)   // 公有成員函數set_data()
     {
        id=i;
        if(w>0 && h>0)
        {
           width=w;    
           height=h;
        }
        else
           cout << "input error" << endl;
     }
};

int main(void)
{
   CWin win1;   
      
   win1.set_data('A',50,40);
   win1.show_area();  	                 // 顯示面積 
   system("pause");
   return 0;
}
