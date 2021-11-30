//prog19_9, 類別樣板的使用範例(不同引數型態的情形)
#include <iostream>   
#include <cstdlib>
using namespace std;
template <class T1,class T2>               // 定義類別樣板
class CWin
{
   protected:
     T1 width;       	                   // 指定width的型態為T1
     T2 height;		                       // 指定height的型態為T2
   public:
     CWin(T1 w,T2 h):width(w),height(h){};
   
     void show(void);
};

template <class T1, class T2>
void CWin<T1,T2>::show()                   // 定義show()函數
{
   cout << "width=" << width << ", ";
   cout << "height=" << height << endl;
}

int main(void)
{
   CWin <int,double> win1(50,60.05);       // 建立win1物件
   CWin <double,int> win2(50.25,74);       // 建立win2物件
   
   cout << "win1 object: ";
   win1.show();
   cout << "win2 object: ";   
   win2.show();
   
   system("pause");
   return 0;
}
