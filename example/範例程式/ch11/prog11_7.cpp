// prog11_7, 以指標傳遞結構到函數
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct data			                              // 定義結構
{
	string name;
	int a,b;
};
void change(struct data *),prnstr(struct data);   // 函數原型
int main(void)
{
   struct data first={"David Young",9,2}; 		  // 宣告結構變數
   prnstr(first);
   cout << "after process..." << endl;
   change(&first);
   prnstr(first);
   
   system("pause");
   return 0;
}

void change(struct data *ptr)		              // 自訂函數change()
{	
   int temp;
   temp=ptr->a;            // ptr->a可取出ptr所指向之結構的欄位a之值
   ptr->a=ptr->b;          // 取出欄位b的值，並設定給欄位a存放
   ptr->b=temp;            // 將temp設定給ptr所指向之結構的欄位b存放
   return;
}

void prnstr(struct data in)		                  // 印出結構變數內容
{
   cout << "name=" << in.name << endl;
   cout << "a=" << in.a << "\t";
   cout << "b=" << in.b << endl;
   return;
}
