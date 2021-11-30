// hw15_5c,
#include <iostream>
#include <cstdlib>
using namespace std;
class CTime
{
   private:
      int hour,min;
      double sec;

   public:
      CTime(int h,int m,double s):hour(h),min(m),sec(s){}
      CTime(){}
      void set_time(int h,int m, double s)
      {
         hour=h;
         min=m;
         sec=s;
      }
      void show_time()
      {
         cout << hour << "hr " << min << "min " << sec << "sec" << endl;
      }
};

int main(void)
{
   CTime t1(4,23,56.3);
   CTime t2(5,45,30.3);
   CTime t3;
   
   t3.set_time(2,40,30.4);
   
   t1.show_time();
   t2.show_time();
   t3.show_time();
   
   system("pause");
   return 0;
}

/* output-------------------------------
4hr 23min 56.3sec
5hr 45min 30.3sec
2hr 40min 30.4sec
--------------------------------------*/
