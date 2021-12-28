//prog19_10, 樣板內限定某個引數必須為某個型態的變數
#include <iostream>   
#include <cstdlib>
using namespace std;
template <class T1,class T2,char id='D'>           // 樣板內加入特定型態的變數
class CWin
{
   protected:
     T1 width;
     T2 height;
   public:
     CWin(T1 w,T2 h):width(w),height(h){};
   
     void show();
};

template <class T1, class T2, char id>             // 定義show()函數
void CWin<T1,T2, id >::show()
{
   cout << id << endl;
   cout << "width=" << width << ", ";
   cout << "height=" << height << endl;
}

int main(void)
{
   CWin <int,double,'A'> win1(50,60.05);
   CWin <double,int> win2(50.25,74);  
   
   cout << "win1 object: ";
   win1.show();
   cout << "win2 object: ";   
   win2.show();
   
   system("pause");
   return 0;
}
