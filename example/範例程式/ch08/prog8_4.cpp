// prog8_4, 陣列的界限檢查
#include <iostream>
#include <cstdlib>
using namespace std;
#define MAX 5
int main(void)
{
   int score[MAX];
   int i=0,num;
   float sum=0.0f;
   cout << "Enter 0 stopping input!!" << endl;
   do 
   {
      if(i==MAX)	               // 當i的值為MAX，表示陣列已滿，即停止輸入
      {
         cout << "No more space!!" << endl;
         i++;
         break;
      }
      cout << "Input score:";
      cin >> score[i];
   }while(score[i++]>0);           // 輸入成績，輸入0或負數時結束
   num=i-1;
   for(i=0;i<num;i++)
      sum+=score[i];		       // 計算平均成績
   cout << "Average of all is " << sum/num << endl;
   system("pause");
   return 0;
}
