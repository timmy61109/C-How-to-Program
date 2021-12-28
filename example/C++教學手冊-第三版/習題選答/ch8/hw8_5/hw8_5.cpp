// hw8_5,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i,j,sum[3]={0},sum1[5]={0};
   int maxs=sum[0];
   int maxp=sum1[0];
   int s=0,p=0;
   int sale[3][5]={{33,32,56,45,33},
                   {77,33,68,45,23},
                   {43,55,43,67,65}};  
   int product[5]={12,16,10,14,15};
   for(i=0;i<3;i++)   
   {
      cout << "銷售員" << (i+1) << "的銷售量為 ";
      for(j=0;j<5;j++)
         cout << sale[i][j] << " ";
      cout << endl;
   } 
   cout << endl;
   cout << "(a)每個銷售員銷售總金額如下: " << endl; 
   for(i=0;i<3;i++)   
   {
      for(j=0;j<5;j++)
         sum[i]=sum[i]+ sale[i][j]*product[j] ;
      cout << "銷售員" << i+1 << "的銷售總金額 " << sum[i] <<endl;
   } 
   cout << endl <<"(b)每項產品銷售總金額如下: " << endl;
   for(j=0;j<5;j++)
   {
      for(i=0;i<3;i++)
         sum1[j]=sum1[j]+sale[i][j]*product[j];
      cout << "產品" << char(j+65);
      cout << "的銷售總金額 " << sum1[j] << endl;
   }
   for(i=0;i<3;i++)
      if(sum[i]>maxs)
      {
         maxs=sum[i];
         s=i;
      }  
   cout << endl << "(c)業績最好的銷售員: ";
   cout << "銷售員" << s+1 << endl;      
  
   for(j=0;j<5;j++)
      if(sum1[j]>maxp)
      {
         maxp=sum1[j]; 
         p=j;
      }        
   cout << endl << "(d)銷售金額最多的產品: ";
   cout << "產品" << char(p+65) << endl;  
   
   system("pause");
   return 0;
}

/* output--------------------------------
銷售員1的銷售量為 33 32 56 45 33
銷售員2的銷售量為 77 33 68 45 23
銷售員3的銷售量為 43 55 43 67 65

(a)每個銷售員銷售總金額如下:
銷售員1的銷售總金額 2593
銷售員2的銷售總金額 3107
銷售員3的銷售總金額 3739

(b)每項產品銷售總金額如下:
產品A的銷售總金額 1836
產品B的銷售總金額 1920
產品C的銷售總金額 1670
產品D的銷售總金額 2198
產品E的銷售總金額 1815

(c)業績最好的銷售員: 銷售員3

(d)銷售金額最多的產品: 產品D
---------------------------------------*/
