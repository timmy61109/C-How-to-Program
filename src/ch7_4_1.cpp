// ch7_4_1.cpp
#include <iostream>
#include <string.h>
#include "ch7_4.h"


Common::Common(student_t student) {
  chinese = student.chinese;
  english = student.english;
  math = student.math;
}


// 共同科目資料成員的顯示
void Common::showdata() {
  std::cout
  << "\n中文成績-->" << chinese
  << "\n英文成績-->" << english
  << "\n數學成績-->" << math;
}


Electronics::Electronics(student_t student) {
 computer = student.computer;
 circuit = student.circuit;
}


// 電子科目資料成員的顯示
void Electronics::showdata() {
  std::cout
  << "\n電腦概論-->" << computer
  << "\n電路學-->"  << circuit;
}


Account::Account(student_t student) {
  economics = student.economics;
  accounting = student.accounting;
}


// 會計科目資料成員的顯示
void Account::showdata() {
   std::cout
   << "\n經濟學-->" << economics
   << "\n會計學-->"  << accounting;
}  // Constructor，成員初設串列


Mechanics::Mechanics(student_t student) {
  material = student.material;
  control = student.control;
}


// 機械科目資料成員的顯示
void Mechanics::showdata() {
   std::cout
   << "\nMaterial-->" << material
   << "\nControl-->"  << control;
}


// Constructor，成員初設串列
Student_EE::Student_EE(student_t student):Common(student), Electronics(student) {
  strcpy(student_name, student.student_name);  // 學生資料成員的設定
  strcpy(student_number, student.student_number);
}


// 共同科目資料成員的顯示 Electronics::showdata();  // 電子科目資料成員的顯示
void Student_EE::showdata( ) {  // 學生資料成員的顯示
  std::cout << "\n學生姓名-->" << student_name << "\n學號-->"  << student_number;
  Common::showdata();
  Electronics::showdata();
}


// Constructor，成員初設串列
Student_AC::Student_AC(student_t student):Common(student), Account(student) {
  strcpy(student_name, student.student_name);  // 學生資料成員的設定
  strcpy(student_number, student.student_number);
}


// 學生資料成員的顯示
void Student_AC::showdata() {
     std::cout << "\n學生姓名-->" << student_name << "\n學號-->"  << student_number;
     Common::showdata();  // 共同科目資料成員的顯示
     Account::showdata();  // 電子科目資料成員的顯示
}


// Constructor，成員初設串列
Student_ME::Student_ME(student_t student):Common(student), Mechanics(student) {
  strcpy(student_name, student.student_name);  // 學生資料成員的設定
  strcpy(student_number, student.student_number);
}

// 學生資料成員的顯示
void Student_ME::showdata() {
  std::cout
  << "\n學生姓名-->" << student_name
  << "\n學號-->"  << student_number;
  Common::showdata();  // 共同科目資料成員的顯示
  Mechanics::showdata();  // 電子科目資料成員的顯示
}


Colloge::Colloge(student_t student):Student_EE(student), Student_AC(student), Student_ME(student) {
  strcpy(colloge_name, student.colloge_name);  // 學生資料成員的設定
  strcpy(email_adders, student.email_adders);
}

void Colloge::showdata() {
  std::cout
  << "\n科系-->" << colloge_name
  << "\n電子郵件-->"  << email_adders;
  if (!strcmp(colloge_name, "電子科")) {
    Student_EE::showdata();  // 共同科目資料成員的顯示
  } else if (!strcmp(colloge_name, "會計科")) {
    Student_AC::showdata();  // 共同科目資料成員的顯示
  } else if (!strcmp(colloge_name, "機械科")) {
    Student_ME::showdata();  // 共同科目資料成員的顯示
  }
}
