#include <iostream.h>
const int LEN  = 10;
const int LEN1 = 7;
 class Common   //共同科目
 {
  protected:
	int Chinese;
	int English;
	int Math;
  public:                         //Constructor
     Common(int chi,int eng,int ma);
     void  showdata();
 };

 class Electronics        //電子科目
 {
  protected:
	int Computer;
	int Circuit;
  public:
	Electronics(int com,int cir);       //Constructor
	void showdata();
 };


class Student:public Common,public Electronics     //學生
 {
  private:
         char name[LEN];
        char stu_num[LEN1];
  public:                 //Constructor
        Student(char *n,char *s, int chi,
                  int eng,int math,int com, int cir);
        void showdata();
 };
