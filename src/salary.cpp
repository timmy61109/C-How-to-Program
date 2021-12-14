#include <iostream>
#include <string.h>
class Salary {
  //類別宣告
  private:
    char name[10];
    static int pay;    //靜態資料成員
    int  day;
  public:
    Salary() {};      //Default constructor
    ~Salary() {};      //Destructor
    static void getpay(int p) {pay=p;} //靜態成員函數定義
    void getdata();              //輸入函數宣告
    void showdata();             //顯示資料函數宣告
};

void Salary::getdata() {
  //輸入函數定義
  std::cout << "姓名=";
  std::cin >> name;
  std::cout << "工作天數= ";
  std::cin >> day;
}

void Salary::showdata() {
  //顯示資料函數定義
  std::cout << "姓名="<< name
    << "\t每日工資= "<< pay
    << "\t工作天數= "<<day
    << "\t薪資="<< pay*day
    << "\n\n";
}

int Salary::pay;       //靜態資料成員定義

int main() {
  int p;

  std::cout << "每日工資=";
  std::cin >> p;
  Salary::getpay(p);      //靜態成員函數呼叫

  Salary a;
  a.getdata( );
  a.showdata( );

  std::cout << "\n\n每日工資=";
  std::cin >> p;
  Salary::getpay(p);  //靜態成員函數呼叫

  Salary b;
  b.getdata();
  b.showdata();

  std::cout << "\n";
  return 0;
}
