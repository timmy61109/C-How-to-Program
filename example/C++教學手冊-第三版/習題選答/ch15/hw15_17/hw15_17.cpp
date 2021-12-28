// hw15_17,
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
      CTime& operator=(const CTime &t)
      {
          cout << "operator=() called" << endl;
          this->hour=t.hour;
          this->min=t.min;
          this->sec=t.sec;
          return *this;
      }
};

int main(void)
{
   CTime t1(6,14,21.3);
   CTime t2,t3,t4;

   t2=t3=t4=t1;
   
   t1.show_time();
   t2.show_time();
   t3.show_time();
   t4.show_time();
  
   system("pause");
   return 0;
}

/* output-------------------------------
operator=() called
operator=() called
operator=() called
6hr 14min 21.3sec
6hr 14min 21.3sec
6hr 14min 21.3sec
6hr 14min 21.3sec
--------------------------------------*/
