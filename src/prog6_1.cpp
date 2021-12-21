#include <iostream>
#include <string.h>
#include "prog6.h"

void Department::getdata() {
  std::cout << "\n公司名稱-->";
  std::cin >> name;
}

void Department::showdata() {
  std::cout << "\n公司名稱 -->" << name;
}

void Human::getdata() {
  Department::getdata();
  std::cout << "公司總人數-->";
  std::cin >> total_member;
  std::cout << "人事部門總人數-->";
  std::cin >> department_member;
}

void Human::showdata()
{
   std::cout << "\n公司總人數-->" << total_member;
   std::cout << "\n人事部門總人數-->"	<< department_member;
}

void Account::getdata()
{
 std::cout << "會計部門總人數-->";
 std::cin >> department_member;
 std::cout << "公司總資金-->" ;
 std::cin  >> captial;
 std::cout << "公司負債-->";
 std::cin  >> debt;
}
void Account::showdata()
{
 std::cout << "\n會計部門總人數-->" << department_member;
 std::cout << "\n公司總資金-->" << captial;
 std::cout << "\n公司負債-->" << debt;
}
void Sales::getdata()
{
 std::cout << "營業部門總人數-->";
 std::cin >> department_member;
 std::cout << "營業額-->";
 std::cin >> business;
}
void Sales::showdata()
{
 std::cout << "\n營業部門總人數-->" << department_member;
 std::cout << "\n營業額-->"<< business;
}
