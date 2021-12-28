// hw15_5d,
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
      int operator>(CTime &t)
      {
         return (this->to_sec() > t.to_sec());
      }
      int operator<(CTime &t)
      {
         return (this->to_sec() < t.to_sec());
      }
};

int main(void)
{
   CTime t1(4,23,56.3);
   CTime t2(5,45,30.3);
   
   t1.show_time();
   t2.show_time();
   
   if(t1>t2)
      cout << "t1 is larger than t2" << endl;
   else
      cout << "t2 is larger than t1" << endl;

   if(t1<t2)
      cout << "t1 is smaller than t2" << endl;
   else
      cout << "t2 is smaller than t1" << endl;
   
   system("pause");
   return 0;
}

/* output-------------------------------
4hr 23min 56.3sec
5hr 45min 30.3sec
t2 is larger than t1
t1 is smaller than t2
--------------------------------------*/
