// hw10_7,
#include <iostream>
#include <cstdlib>
using namespace std;
void sort(int &,int &,int &);
int main(void)
{
   int a=3,b=5,c=2;
   cout << "排序前, " << a << " " << b << " " << c << endl;
   sort(a,b,c);
   cout << "排序後, " << a << " " << b << " " << c << endl;
   
   system("pause");
   return 0;
}

void sort(int &x,int &y,int &z)
{
   int arr[3];
   int i,j,temp;
   arr[0]=x;
   arr[1]=y;
   arr[2]=z;
   for(i=0;i<3;i++)   // bubble sort
      for(j=0;j<2;j++)
         if(arr[j] < arr[j+1])
         {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
   x=arr[0];
   y=arr[1];
   z=arr[2];
   return;
}
     
/* output-------
排序前, 3 5 2
排序後, 5 3 2
--------------*/
