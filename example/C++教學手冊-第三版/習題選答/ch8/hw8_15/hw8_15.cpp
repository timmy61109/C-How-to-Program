// hw8_15,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char a[26]={'\0'};
   for(int i=0;i<26;i++)
   {
      a[i]=char(i+65);
      cout << a[i] << " ";
   }  
   cout << endl;
   
   system("pause");
   return 0;
}

/* output---------------------------------------------
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
----------------------------------------------------*/
