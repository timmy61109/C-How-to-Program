// ch7_4.h
#include <iostream>
const int SIZE = 50;

typedef struct {
  char student_name[SIZE];
  char student_number[SIZE];
  char colloge_name[SIZE];
  char email_adders[SIZE];
  int chinese;
  int english;
  int math;
  int computer;
  int circuit;
  int economics;
  int accounting;
  int material;
  int control;
} student_t;

// 共同科目
class Common {
  protected:
  	int chinese;
  	int english;
  	int math;
  public:
    // Constructor
    Common(student_t student);
    void  showdata();
};


// 電子科目
class Electronics {
  protected:
    int computer;
    int circuit;
  public:
    // Constructor
    Electronics(student_t student);
    void showdata();
};


// 會計科目
class Account {
  protected:
	  int economics;
    int accounting;
  public:
    // Constructor
    Account(student_t student);
    void showdata();
};


// 機械科目
class Mechanics {
  protected:
	  int material;
    int control;
  public:
    // Constructor
    Mechanics(student_t student);
    void showdata();
};


// 電子科學生
class Student_EE:public Common, public Electronics {
  private:
    char student_name[SIZE];
    char student_number[SIZE];
  public:                                        // Constructor
    Student_EE(student_t student);
    void showdata();
};


// 會計科學生
class Student_AC:public Common, public Account {
private:
     char student_name[SIZE];
     char student_number[SIZE];
public:                                        // Constructor
   Student_AC(student_t student);
   void showdata();
};


//  機械科學生類別
class Student_ME:public Common, public Mechanics {
  private:
    char student_name[SIZE];
    char student_number[SIZE];
  public:
    // Constructor
    Student_ME(student_t student);
    void showdata();
};


class Colloge:public Student_EE, public Student_AC, public Student_ME {
  private:
    char colloge_name[SIZE];
    char email_adders[SIZE];

  public:
    Colloge(student_t student);
    void showdata();
};
