// cminiwin.h, 此檔案定義子類別CMiniWin
#include <iostream>
#include "cwin.h"
using namespace std;

class CMiniWin: public CWin    // 定義子類別CMiniWin
{ 
   public:
     CMiniWin(char ch, int w, int h):CWin(ch,w,h){}
     void show(void)
     {
        cout << "Mini window " << id << ":" << endl; 
        cout << "Area = " << 0.8*width*height << endl;
     }   
};
