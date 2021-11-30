// hw15_9,
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
      CTime operator-(CTime &t)
      {
         double time,s;
         int h,m;

         time=this->to_sec()-t.to_sec();
         h=(int)time/3600;
         m=((int)time-h*3600)/60;
         s=time-(h*3600+m*60);
         return CTime(h,m,s);
      }
};

int main(void)
{
   CTime t1(6,23,16.3);
   CTime t2(3,45,35.8);
   CTime t3=t1-t2;
   t1.show_time();
   t2.show_time();
   t3.show_time();

   system("pause");
   return 0;
}

/* output-------------------------------
6hr 23min 16.3sec
3hr 45min 35.8sec
2hr 37min 40.5sec
--------------------------------------*/
