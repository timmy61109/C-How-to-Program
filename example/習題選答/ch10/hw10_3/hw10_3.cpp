// hw10_3,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int arr[2][4]={{2,3,4,5},{6,7,8,9}};

   cout << "(a) arr=" << arr << endl;
   cout << "(b) arr[0]=" << arr[0] << endl;
   cout << "    arr[1]=" << arr[1] << endl;
   cout << "(c) arr+1=" << arr+1 << endl;
   cout << "(d) *(arr+0)=" << *(arr+0) << endl;
   cout << "    *(arr+1)=" << *(arr+1) << endl;

   cout << "(e) *(arr+1)+0=" << *(arr+1)+0 << endl;
   cout << "    *(arr+1)+1=" << *(arr+1)+1 << endl;
   cout << "    *(arr+1)+2=" << *(arr+1)+2 << endl;
   cout << "    *(arr+1)+3=" << *(arr+1)+3 << endl;

   cout << "(f) *(*(arr+1)+0)=" << *(*(arr+1)+0) << endl;
   cout << "    *(*(arr+1)+1)=" << *(*(arr+1)+1) << endl;
   cout << "    *(*(arr+1)+2)=" << *(*(arr+1)+2) << endl;
   cout << "    *(*(arr+1)+3)=" << *(*(arr+1)+3) << endl;

   system("pause");
   return 0;
}

/* output-------------------
(a) arr=0x22ff50
(b) arr[0]=0x22ff50
    arr[1]=0x22ff60
(c) arr+1=0x22ff60
(d) *(arr+0)=0x22ff50
    *(arr+1)=0x22ff60
(e) *(arr+1)+0=0x22ff60
    *(arr+1)+1=0x22ff64
    *(arr+1)+2=0x22ff68
    *(arr+1)+3=0x22ff6c
(f) *(*(arr+1)+0)=6
    *(*(arr+1)+1)=7
    *(*(arr+1)+2)=8
    *(*(arr+1)+3)=9
-------------------------*/
