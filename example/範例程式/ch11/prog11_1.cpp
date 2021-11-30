// prog11_1, 結構變數的輸入與輸出
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct mydata		                         // 定義並宣告結構變數
{
    string name;
    int math;
} student;
int main(void)
{
   cout << "Student's name:";   			 // 輸入結構變數
   getline(cin,student.name);
   cout << "Math score:";
   cin >> student.math;
   cout << "*****Output*****" << endl;   	 // 輸出結構變數內容
   cout << student.name << "'s Math score is " << student.math;
   
   system("pause");
   return 0;
}
