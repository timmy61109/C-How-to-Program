// prog8_10, �L�X�}�C����}
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void func(int []);  		         // �ŧi��ƭ쫬
int main(void)
{
   int i,a[4]={20,8,13,6};
   cout << "In main()," << endl;     // �L�X�}�Ca���ȤΦ�}
   for(i=0;i<4;i++)
   {
      cout << "a[" << i << "]=" << setw(2) << a[i];
      cout << ",address=" << &a[i] << endl;
   }
   func(a);
   system("pause");
   return 0;
}

void func(int b[])		             // �ۭq���func()
{	
   int i;
   cout << "In func()," << endl;	 // �L�X�}�Cb���ȤΦ�}
   for(i=0;i<4;i++)
   {
      cout << "b[" << i << "]=" << setw(2) << b[i];
      cout << ",address=" << &b[i] << endl;
   }
   return;
}
