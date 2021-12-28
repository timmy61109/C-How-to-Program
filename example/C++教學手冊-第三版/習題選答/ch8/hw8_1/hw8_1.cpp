// hw8_1,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int A[]={48,75,30,17,62};    
   int i,min=A[0],max=A[0];
   int length=sizeof(A)/sizeof(int);  
   int mina=0,maxa=0;
   cout <<"elements in array A are ";
   for(i=0;i<length;i++)  
   {
      cout << A[i] << " ";
      if(A[i]>max)       
      {
         max=A[i];
         maxa=i;
      }   
      if(A[i]<min)         
      {
         min=A[i];
         mina=i;
      }    
   }
   cout  << endl;
   cout  << "最大值註標A[" << maxa<< "]" << endl;  
   cout  << "最小值註標A["  << mina << "]" << endl;    
   cout  << "差為 " << max-min << endl;  
   cout  << "和為 " << max+min << endl; 
   
   system("pause");
   return 0;
}

/* output-------------------------------
elements in array A are 48 75 30 17 62
最大值註標A[1]
最小值註標A[3]
差為 58
和為 92
--------------------------------------*/
