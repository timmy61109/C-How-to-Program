// hw15_15,
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

      void show_time()
      {
         cout << hour << "hr " << min << "min " << sec << "sec" << endl;
      }
      double to_sec()
      {
         return hour*3600+min*60+sec;
      }
      void operator=(const CTime &t)
      {
         cout << "operator=() called" << endl;
         this->hour=t.hour;
         this->min=t.min;
         this->sec=t.sec;
      }
};

int main(void)
{
   CTime t1(6,14,21.3);
   CTime t2;
   t1.show_time();
   t2=t1;
   t2.show_time();

   system("pause");
   return 0;
}

/* output-------------------------------
6hr 14min 21.3sec
operator=() called
6hr 14min 21.3sec
--------------------------------------*/
