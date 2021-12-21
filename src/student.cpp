#include <iostream>
#include <string.h>
#ifndef SIZE
#define SIZE 50
#endif

// 類別宣告
class Student {
  private:
    char name[SIZE];
    char school_num[SIZE];
    int age;
    static int total_student;  // 記錄學生總數
  public:
    Student(char *name_p, char *school_num_p, int number_p);  // Constructor
    Student() {}  // default constructor
    ~Student() {
      // Destructor
      delete name, school_num;
    }

    static int get_num() {
      return total_student;
    }
    void selection_sort();
    void show();
};

Student::Student(char *name_p, char *school_num_p, int number_p) {
  // Constructor
  for (size_t i = 0; i < SIZE; i++) {
    name_p[i] = name[i];
    school_num_p[i] = school_num[i];
  }
  age = number_p;
  total_student += 1;
}

void Student::show() {
  // 資料顯示
  std::cout << "\n\n姓名=" << name << "\n學號=" << school_num << "\n年齡=" << age;
}

void Student::selection_sort(/* arguments */) {
  Student student_temp[4];

  for (size_t i = 0; i < (size_t) Student::get_num(); i++) {

  }

}

int Student::total_student = 0;

// 主程式
int main() {
  // 物件定義，並定義初值
  Student student[4] = {
    Student("Losa", "1234224", 11),
    Student("John", "1234424", 14),
    Student("Jane", "1216224", 13),
    Student("Mary", "3224224", 12)
  };

  // 顯示
  for (int i = 0; i< Student::get_num(); i++) {
    student[i].show();
    std::cout << "\n";
  }
	return 0;
}
