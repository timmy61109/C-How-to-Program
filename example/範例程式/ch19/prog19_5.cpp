//prog19_5, ㄧ计妓狾ㄏノ絛ㄒ
#include <iostream>   
#include <cstdlib>
using namespace std;
template <class T>	          // ﹚竡ㄧ计妓狾 
T add(T a,T b)  		      // add()肚篈T肚ㄢま计篈琌T
{
   T sum=a+b; 		          // 砞﹚跑计sum篈Tㄤ单a+b
   return sum;
}

int main(void)
{
   cout << "add(3,4)=" << add<int>(3,4) << endl;   
   cout << "add(3.2,4.6)=" << add<double>(3.2,4.6) << endl;

   system("pause");
   return 0;
}
