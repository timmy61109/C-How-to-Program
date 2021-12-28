#include <iostream.h>
#include <string.h>
#include "ch7_3.h"
Common::Common(int c,int e,int m)
{
 Chinese=c;
 English=e;
 Math=m;
}
void Common::showdata()  //共同科目資料成員的顯示
{
 cout <<"\n中文成績-->" << Chinese<<"\n英文成績-->"
          << English<<"\n數學成績-->" << Math;
}

Electronics::Electronics(int com, int cir)
{
 Computer=com;
 Circuit=cir;
}
void Electronics::showdata() //電子科目資料成員的顯示
{
 cout << "\n電腦概論-->" << Computer<< "\n電路學-->"  << Circuit;
}
				  //Constructor，成員初設串列
Student::Student(char *n,char *s, int chi,int eng,int math,int
        com, int cir):Common(chi,eng,math),Electronics(com,cir)
 {
  strcpy(name,n);                  //學生資料成員的設定
  strcpy(stu_num,s);
 }

 void Student::showdata()
 {                                                        //學生資料成員的顯示
  cout << "\n學生姓名-->" << name<< "\n學號-->"  << stu_num;
  Common::showdata();                     //共同科目資料成員的顯示 Electronics::showdata();                //電子科目資料成員的顯示
 }      				            //學校資料成員的設定
 School::School(char *sho,char *n,char *s, int chi,int eng,
 	int math,int com, int  cir) : Student(n,s,chi,eng, math,
           com, cir)
 {
  strcpy(school_name,sho);
 }
 void School::showdata()        //學校資料成員的顯示
 {
  cout << "\n就讀學校-->" <<  school_name;
  Student::showdata();
 }
