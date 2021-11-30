#include <iostream>
#include <stdio.h>
#include <string.h>

class Student {
  private:
    char *school;  // 學校
    char *class_num;  // 班級
    char name[8];  // 姓名
    long student_num;  // 學號
  public:
    Student(char *s, char *c);  // Constructor 宣告
    Student(const Student& str);  // Copy constructor宣告
    Student() {}  // default Constructor
    ~Student() {
      // Destructor
      delete school;
      delete class_num;
    }
    void ip_data();
    void show_data();
};

Student::Student(char *s, char *c) {
  unsigned len;
  len = strlen(s);  // 複製學校名
  school = new char[len + 1];
  strcpy(school, s);
  len = strlen(c);  // 複製班級名
  class_num = new char[len + 1];
  strcpy(class_num, c);
}

Student::Student(const Student& str) {
  // Copy constructor
  unsigned len;
  len = strlen(str.school);  //複製學校名
  school = new char[len+1];
  strcpy(school,str.school);
  len = strlen(str.class_num);  //複製班級名
  class_num = new char[len+1];
  strcpy(class_num,str.class_num);
 }

void Student::ip_data() {
  std::cout << "\n姓名=";
  std::cin >> name;
  std::cout << "學號=";
  std::cin >> student_num;
}

void Student::show_data() {
  std::cout << "\n學校=" << school
  << "\t班級=" << class_num
	<< "\t姓名=" << name
	<< "\t學號=" << student_num
  << "\n\n";
}

int main() {
  char school[256] = "國立金門技術學院";
  char cls[256] = "電三甲";
  Student stu1(school, cls);
  Student stu2 = stu1;
  Student stu3 = stu1;
  stu1.ip_data();
  stu2.ip_data();
  stu3.ip_data();
  stu1.show_data();
  stu2.show_data();
  stu3.show_data();
  return 0;
}
