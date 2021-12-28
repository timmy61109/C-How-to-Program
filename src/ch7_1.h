#include <iostream>
const int LEN  = 10;
const int LEN1 = 7;


// 共同科目
class Common {
  protected:
    int Chinese;
  	int English;
  	int Math;
  public:
  	void  showdata();
};

// 電子科目
class Electronics
{
  protected:
    int Computer;
    int Circuit;
  public:
    void showdata();
};


//學生淚類別宣告
class Student:public Common,public Electronics {
  private:
    char name[LEN];
    char stu_num[LEN1];
  public:                                       //Constructor
    Student(char *n, char *s, int chi, int eng, int math, int com, int cir);
    void showdata();
};
