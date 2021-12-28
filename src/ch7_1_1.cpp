#include <iostream>
#include <string.h>
#include "ch7_1.h"


//共同科目資料成員的顯示
void Common::showdata() {
  std::cout <<"\n中文成績-->" << Chinese<<"\n英文成績-->"
  << English<<"\n數學成績-->" << Math;
}


//電子科目資料成員的顯示
void Electronics::showdata() {
  std::cout << "\n電腦概論-->" << Computer << "\n電路學-->" << Circuit;
}

//Constructor
Student::Student(char *n,char *s, int chi,int eng,int math,int com, int cir) {
  strcpy(name, n);  // 學生資料成員的設定
  strcpy(stu_num, s);
  Chinese=chi;  // 共同科目資料成員的設定
  English=eng;
  Math=math;
  Computer=com;  // 電子科目資料成員的設定
  Circuit=cir;
}


//學生資料成員的顯示
void Student::showdata() {
  std::cout << "\n學生姓名-->" << name<< "\n學號-->" << stu_num;
  Common::showdata();                     //共同科目資料成員的顯示 Electronics::showdata();                //電子科目資料成員的顯示
}
