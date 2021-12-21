#include <iostream>
#include <string.h>
#define LEN 10


// 公司部門
class Department {
  protected:
    char name[LEN];  // 公司名稱
  public:
    Department() {};  // Constructor
    ~Department() {};  // Destructor
    void getdata();
    void showdata();
};


//人事部門
class Human:public Department {
  private:
    int total_member;  // 公司人數
    int department_member;  // 部門人數
  public:
    Human() {};  // Constructor
    ~Human() {};  // Destructor
    void getdata();
    void showdata();
};


//曾計部門
class Account:public Department {
  private:
    int department_member;  // 部門人數
    float captial;  // 資金
    float debt;  // 負債
  public:
    Account() {};  // Constructor
    ~Account() {};  // Destructor
    void getdata();
    void showdata();
};


//營業部門
class Sales:public Department {
  private:
    int department_member;  //部門人數
    float business;         //營業部門
  public:
    Sales() {};           //Constructor
    ~Sales() {};           //Destructor
    void getdata();
    void showdata();
};
