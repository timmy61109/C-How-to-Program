// prog11_2, 結構的大小
#include <iostream>
#include <cstdlib>
using namespace std;
struct mydata	      // 定義結構
{
   string name;
   int math;
} student;
int main(void)
{
   cout << "sizeof(student)=" << sizeof(student) << endl;
   
   system("pause");
   return 0;
}
