#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define SIZE 50

typedef struct {
  char *name_n;
  int *school_number_n;
  int age;
} student_t;

// 類別宣告
class Student {
  private:
    char *name_n;
    int *school_number_n;
    int age;
    static int total_student;  // 記錄學生總數
    int school_number;
  public:
    Student(char *name_p, int school_number_p, int number_p);  // Constructor
    Student() {}  // default constructor
    ~Student() {
      // Destructor
      delete name_n;
      delete school_number_n;
    }

    static int get_num() {
      return total_student;
    }
    int get_school_number() {
      return school_number;
    }
    void show();
    void selection_sort(Student *student);
};


// Constructor
Student::Student(char name_p[SIZE], int school_number_p, int number_p) {
  name_n = new char[SIZE];
  school_number_n = new int;
  for (size_t i = 0; i < SIZE; i++) {
    name_n[i] = name_p[i];
  }
  *school_number_n = school_number_p;
  school_number = school_number_p;
  age = number_p;
  total_student += 1;
}

void Student::show() {
  // 資料顯示
  std::cout << "\n\n姓名=" << name_n << "\n學號=" << *school_number_n << "\n年齡=" << age;
}

int Student::total_student = 0;

// 主程式
int main() {
  // 物件定義，並定義初值
  char name_1[50] = "Losa";
  char name_2[50] = "John";
  char name_3[50] = "Jane";
  char name_4[50] = "Mary";
  Student student[4] = {
    Student(name_1, 1234421, 11),
    Student(name_3, 1234422, 13),
    Student(name_4, 1234424, 12),
    Student(name_2, 1234423, 14),
  };

  // 顯示
  for (int i = 0; i< Student::get_num(); i++) {
    student[i].show();
    std::cout << "\n";
  }

  Student student_temp;

  for (size_t i = 0; i < (size_t) Student::get_num(); i++) {
    for (size_t j = i + 1; j < (size_t) Student::get_num(); j++) {
      if (student[i].get_school_number() > student[j].get_school_number()) {
        student_temp = student[i];
        student[i] = student[j];
        student[j] = student_temp;
      }
    }
  }

  std::cout << "\n排序過後\n\n";
  for (int i = 0; i< Student::get_num(); i++) {
    student[i].show();
    std::cout << "\n";
  }
	return 0;
}
