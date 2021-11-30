// prog4_9, 邏輯運算子
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int score;
   cout << "Input your score:";           	// 由鍵盤輸入成績
   cin >> score;
   if ((score<0) || (score>100))
      cout << "Input error!!" << endl;    	// 成績輸入錯誤
   if ((score<60) && (score>49))
      cout <<"Make up exam!!" << endl;    	// 需要補考
   system("pause");
   return 0;
}
