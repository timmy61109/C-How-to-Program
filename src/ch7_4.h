#include <iostream>
const int LEN  = 10;
const int LEN1 = 7;

typedef struct {
  int chinese;
  int english;
  int math;
  int computer;
  int circuit;
  int economics;
  int accounting;
  int material;
  int control;
  char student_name[SIZE];
  char student_number[SIZE];
  char colloge_name[SIZE];
  char email_adders[SIZE];
} student_t;

// 共同科目
class Common {
  protected:
	int Chinese;
	int English;
	int Math;
  public:
    // Constructor
    Common(int chi, int eng, int ma);
    void  showdata();
};


// 電子科目
class Electronics {
  protected:
    int Computer;
    int Circuit;
  public:
    // Constructor
    Electronics(int com, int cir);
    void showdata();
};


// 會計科目
class Account {
  protected:
	  int Economics;
    int Accounting;
  public:
    // Constructor
    Account(int eco,int acc);
    void showdata();
};


// 機械科目
class Mechanics {
  protected:
	  int Material;
    int Control;
  public:
    // Constructor
    Mechanics(int mat, int con);
    void showdata();
};


// 電子科學生
class Student_EE:public Common, public Electronics {
  private:
    char name[LEN];
    char stu_num[LEN1];
  public:                                        // Constructor
    Student_EE(char *n,char *s, int chi,int eng,int math,int com, int cir);
    void showdata();
};


// 會計科學生
class Student_AC:public Common, public Account {
private:
     char name[LEN];
     char stu_num[LEN1];
public:                                        // Constructor
   Student_AC(char *n,char *s, int chi,int eng,int math, int eco, int acc);
   void showdata();
};


//  機械科學生類別
class Student_ME:public Common, public Mechanics {
  private:
    char name[LEN];
    char stu_num[LEN1];
  public:
    // Constructor
    Student_ME(char *n, char *s, int chi, int eng, int math, int mat, int con);
    void showdata();
};


class Colloge::public Student_ME, public Student_EE, public Student_AC {
  private:
    char colloge_name[LEN];
    char e_mail_add[LEN];


  public:
    void showdata();
}
