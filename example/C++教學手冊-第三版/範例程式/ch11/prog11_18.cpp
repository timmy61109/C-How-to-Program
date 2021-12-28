// prog11_18, 璹篈typedefㄏノ
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
typedef struct	                     // ﹚竡璹篈
{ 
   int hour;
   int minite;
   float second;
} mytime;	
void subs(mytime t[]);    	         // ㄧ计 
int main(void)
{
   int i;
   mytime t[3]={{6,24,45.58f},{3,40,17.43f}};
   cout << setfill('0');
   subs(t);	            	         // ㊣subs()ㄧ计璸衡t[0]+t[1]
   for(i=0;i<3;i++)     	         // 皚ず甧 
   {      
      cout << "t[" << i << "]=" << setw(2) << t[i].hour << ":";
      cout << setw(2) << t[i].minite << ":";
      cout << setw(5) << t[i].second << endl;
   }      
   
   system("pause");
   return 0;
}

void subs(mytime t[])		         // 璹ㄧ计subs()
{
   int count2=0,count3=0;
   t[2].second=t[0].second+t[1].second;			// 计
   while(t[2].second>=60)
   {
      t[2].second-=60;
      count3++;
   }
   t[2].minite=t[0].minite+t[1].minite+count3; 	// だ计
   while(t[2].minite>=60)
   {
      t[2].minite-=60;
      count2++;
   }
   t[2].hour=t[0].hour+t[1].hour+count2;		// 计
   return;
}
