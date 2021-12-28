// prog8_21, 字串陣列的複製
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(void)
{
   int i,j;
   string students[3]={"David","Jane Wang","Tom Lee"};
   string copystr[3];
   for(i=0;i<3;i++)           // 將陣列students的內容複製到copystr
      copystr[i]=students[i];
      
   for(i=0;i<3;i++)           // 印出陣列copystr的內容
      cout << "copystr[" << i << "]=" << copystr[i] << endl;
	
   system("pause");
   return 0;
}
