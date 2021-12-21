#include "prog3.h"
#include <iostream>
#include <string.h>

// constructor
Student::Student(char *sn,char *cn) {
  int n = strlen(sn);
  school_name = new char[n+1];
  strcpy(school_name,sn);
  n = strlen(cn);
  class_name = new char[n+1];
  strcpy(class_name,cn);
}

// 顯示
void Student::show() {
  std::cout << "\n學校名稱->" << school_name;
  std::cout << "\n班級名稱->" << class_name;
}

// constructor:成員串列初設
Score::Score(char *s_n,char *c_n):Student(s_n,c_n) {
  std::cout << "\n輸入...." ;
  Student::show();
  std::cout << "\n中文成績:";
  std::cin >> Chinese;
  std::cout << "數學成績:";
  std::cin >> Math;
  std::cout << "英文成績:";
  std::cin >> English;
}

// constructor:成員串列初設
Score::Score(char *s_n,char *c_n,int c,int m,int e):Student(s_n,c_n) {
  Chinese = c;
  Math = m;
  English = e;
}

// 顯示
void Score::show() {
  std::cout << "\n顯示...." ;
  Student::show();
  std::cout << "\n中文成績:" << Chinese;
  std::cout << "\n數學成績:" << Math;
  std::cout << "\n英文成績:" << English;
}
