#include <iostream>
#include "ch7_3.h"

int main()
{
 School stu1("台灣大學","陳彥良","801012", 98,89,79,99,96);
 School stu2("中山大學","余河天","801014", 90,91,87,92,97);
 cout <<"\n登錄後的學生資料顯示.....";
 cout <<"\n\n第一位學生.....";
 stu1.showdata();
 cout <<"\n\n第二位學生.....";
 stu2.showdata();
 cout<<"\n";
 system("pause");
 return 0;
}
