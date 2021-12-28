//prog19_8, 類別樣板的使用範例
#include <iostream>   
#include <cstdlib>
using namespace std;
template <class T>          	              // 定義類別樣板
class CWin
{
   protected:
      T width, height;         	              // 宣告資料成員
   
   public:
      CWin(T w,T h):width(w),height(h){};     // 建構元
   
      void show(void);         	              // show()函數的原型
};

template <class T>          	              // 定義show()函數
void CWin<T>::show()
{
   cout << "width=" << width << ", ";
   cout << "height=" << height << endl;
}

int main(void)
{
   CWin <int> win1(50,60);                    // 建立win1物件
   CWin <double> win2(50.25,60.74);           // 建立win2物件
   
   cout << "win1 object: ";
   win1.show();
   cout << "win2 object: ";
   win2.show();
   
   system("pause");
   return 0;
}
