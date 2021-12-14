#include <iostream>
#include <string.h>

// 類別宣告
class Student {
  private:
    char *name_p;
    char *school_num_p;
    int age;
    static int total_student;  // 記錄學生總數
  public:
    Student(char *name, char *num, int count);  // Constructor
    Student() {}  // default constructor
    ~Student() {
      // Destructor
      delete name_p, school_num_p;
    }

    static int get_num() {
      return total_student;
    }
    void show();  // 顯示函數
};

Student::Student(char *name, char *num, int count) {
  // Constructor
  name_p = new char[strlen(name) + 1];
  school_num_p = new char[strlen(num) + 1];
  strcpy(name_p, name);
  strcpy(school_num_p, num);
  age = count;
  total_student += 1;
}

void Student::show() {
  // 資料顯示
  std::cout << "\n\n姓名=" << name_p << "\n學號=" << school_num_p << "\n年齡=" << age;
}

int Student::total_student = 0;

// 主程式
int main() {
  // 物件定義，並定義初值
  char school_num[256];
  char name = "Losa";
  school_num = "1234224";
  Student student[4] = {
    Student(&name, school_num, 11),
    Student("John", "1234424", 14),
    Student("Jane", "1216224", 13),
    Student("Mary", "3224224", 12)
  };

  Student student_temp[4];

  for (size_t i = 0; i < Student::get_num(); i++) {

  }

  // 顯示
  for (int i = 0; i< Student::get_num(); i++) {
    student[i].show();
    std::cout << "\n";
  }
	return 0;
}
