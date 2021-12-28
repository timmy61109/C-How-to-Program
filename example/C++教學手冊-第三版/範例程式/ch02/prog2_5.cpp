// prog2_5, 語意錯誤的程式
#include <iostream>   	     // 含括iostream檔案
#include <cstdlib>		     // 含括cstdlib檔案
using namespace std;
int main(void)  
{
    int num1=35;			 // 宣告整數變數 num1，並設值為35 
    int num2=28;			 // 宣告整數變數 num2，並設值為28
    	
    cout<<"I have "<<num1<<" books."<<endl;
    cout<<"You have "<<num2<<" books."<<endl;
    cout<<"We have "<<(num1-num2)<<" books."<<endl;
    system("pause");
    return 0;
}
