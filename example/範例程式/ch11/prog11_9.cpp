// prog11_9, 共同空間的設值
#include <iostream>
#include <cstdlib>
using namespace std;
union mydata		// 定義共同空間
{
   int score;
   char grade;
} student={65};		// 宣告共同空間變數
int main(void)
{
   cout << "sizeof(student)=" << sizeof(student) << endl;
   cout << "student.score=" << student.score << endl;
   
   system("pause");
   return 0;
}
