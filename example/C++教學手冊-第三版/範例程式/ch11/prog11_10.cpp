// prog11_10, 共同空間的大小及位址
#include <iostream>
#include <cstdlib>
using namespace std;
union mydata	// 定義共同空間
{
   short math;
   float avg;
} student;
int main(void)
{
   cout << "sizeof(student)=" << sizeof(student) << endl;
   cout << "address of student.math=" << &student.math << endl;
   cout << "address of student.avg=" << &student.avg << endl;
   
   system("pause");
   return 0;
}
