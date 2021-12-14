#include <iostream>
#include <string.h>
#include <stdio.h>
class Person {
  //個人資料類別
  //Friend函數宣告
  friend void getdata(Person&);  //個人資料輸入的
  private:
    char *name;
    int age;
    long tel;
  public:
    Person() {}          //Constructor
    ~Person() {}          //Destructor
    void showdata();  // 顯示個人資料內容函數宣告
};

void getdata(Person& p) {
  // 個人資料輸入函數定義
  char *n;
  int len;
  n = new char[30];
  std::cout << "\n姓名= ";       //輸入姓名
  std::cin >> n;
  len = strlen(n);
  p.name = new char[len + 1];
  strcpy(p.name, n);
  std::cout << "年齡= ";         //輸入年齡
  std::cin >> p.age;
  std::cout << "電話= ";          //輸入電話
  std::cin >> p.tel;
  delete n;
}

void Person::showdata()       //顯示個人資料內容函數定義
{
 std::cout << "\n姓名= "<< name<< "\t年齡= "<< age
	<< "\t電話= "<< tel;
}

int main()
 {
  Person a,b;

  std::cout << "\n資料輸入";
  getdata(a);             //個人資料輸入
  getdata(b);

  std::cout << "\n\n資料顯示";   //個人資料顯示
  a.showdata();
  b.showdata();

  std::cout << "\n";
  return 0;
 }
