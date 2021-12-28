// prog13_3, 篶じ更 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                      // ﹚竡跌怠摸CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h)	// Τま计篶じ
     {
        id=i;
        width=w;
        height=h;
        cout << "CWin(char,int,int) 篶じ砆㊣..." << endl;
     }
     CWin(int w,int h)   		// Τㄢま计篶じ
     {
        id='Z';
        width=w;
        height=h;
        cout << "CWin(int,int) 篶じ砆㊣..." << endl;        
     }        
     void show_member(void)  	// Θㄧ计ノㄓ陪ボ戈Θ
     {
        cout<< "Window " << id << ": ";
        cout<< "width=" << width << ", height=" << height << endl;
     }
};

int main(void)
{
   CWin win1('A',50,40); 		// ミwin1ン㊣ま计篶じ
   CWin win2(80,120); 		    // ミwin2ン㊣ま计篶じ
      
   win1.show_member();  
   win2.show_member();
     
   system("pause");
   return 0;
}
