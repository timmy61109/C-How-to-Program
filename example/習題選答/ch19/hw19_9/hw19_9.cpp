// hw19_9,
#include <iostream>
#include <cstdlib>
using namespace std;
template <class T>        // Ãþ§O¼ËªO
class CWin
{
     T width,height;
   public:
     CWin(T w,T h):width(w),height(h){};

     T area(void);
};

template <class T>
T CWin<T>::area(void)
{
   return width*height;
}

template <> int CWin<int>::area(void)
{
   return 0;
}

int main(void)
{
   CWin <int> win1(50,60);
   CWin <double> win2(12.3,45.8);

   cout << "win1 object: ";
   cout << win1.area() << endl;

   cout << "win2 object: ";
   cout << win2.area() << endl;

   system("pause");
   return 0;
}

/* output--------------------------------
win1 object: 0
win2 object: 563.34
---------------------------------------*/
