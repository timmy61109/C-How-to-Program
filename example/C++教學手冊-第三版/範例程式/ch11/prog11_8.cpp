// prog11_8, 共同空間的使用
#include <iostream>
#include <cstdlib>
using namespace std;
union mydata		// 定義共同空間
{
   char grade;
   int score;
} student;			// 宣告共同空間變數
int main(void)
{
   char sex;
   do {
      cout << "Your sex is (1)Male (2)Female:"; 	// 輸入性別
      cin.get(sex);
      cin.get();      	// 吸收多餘的enter值 
   }while((sex>'2') || (sex<'1'));
   if (sex=='1')
   {	
      cout << "Input score:";
      cin >> student.score;
   }
   else
   {	
      cout << "Input grade:";
      cin.get(student.grade);
   }
   cout << "**** Output ****" << endl;			// 輸出
   if (sex=='1')
      cout << "student.score=" << student.score << endl;
   else
      cout << "student.grade=" << student.grade << endl;
   
   system("pause");
   return 0;
}
