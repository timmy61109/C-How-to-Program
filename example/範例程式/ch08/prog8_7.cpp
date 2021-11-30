// prog8_7, 以一維陣列為引數
#include <iostream>
#include <cstdlib>
using namespace std;
#define SIZE 5
void show(int []);			              // 函數原型的宣告
double average(int []);		              // 函數原型的宣告
int main(void)
{
   int score[SIZE]={89,54,73,95,71};	  // 宣告陣列並設定初值
   cout << "學生的成績為 ";  
   show(score);
   cout << "平均成績=" << average(score) << endl;  
   
   system("pause");
   return 0;
}

void show(int a[])			              // 顯示學生成績 
{  
   for(int i=0;i<SIZE;i++)
      cout << a[i] << " ";
   cout << endl;
   return;
}

double average(int a[])		              // 計算平均成績 
{
   double sum=0;
   for(int i=0;i<SIZE;i++)
      sum+=a[i];
   return (sum/SIZE);
}
