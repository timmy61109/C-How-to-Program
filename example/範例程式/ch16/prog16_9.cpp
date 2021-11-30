// prog16_9, 錯誤的範例，子類別裡沒有撰寫拷貝建構元
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                  // 定義CWin類別，在此為父類別
{
   protected:
     char id;

   public:
     CWin(char i='D'):id(i)   	            // 父類別的建構元
     {
        cout << "CWin()建構元被呼叫了..." << endl;
     }
     CWin(const CWin& win)    	            // 父類別的拷貝建構元
     {
        cout << "CWin()拷貝建構元被呼叫了..." << endl;
        id=win.id;
     }
     ~CWin()     				            // 父類別的解構元
     {
        cout << "CWin()解構元被呼叫了... " << endl;
        system("pause");
     }
};

class CTextWin : public CWin                // 定義CTextWin類別，繼承自CWin類別
{
   private:                  	            // 子類別裡的私有成員
      char *text;

   public:
      CTextWin(char i,char *tx):CWin(i)     // 子類別的建構元
      {
         cout << "CTextWin()建構元被呼叫了..." << endl;
         text= new char[strlen(tx)+1];
         strcpy(text,tx);
      }
      ~CTextWin()
      {
         delete [] text;  			        // 釋放text指標所指向的記憶體
         cout << "CTextWin()解構元被呼叫了... " << endl;
         system("pause");
      }
      void show_member()       		        // 子類別的show_member()函數
      {
         cout << "Window " << id << ": ";
         cout << "text = " << text << endl;
      }
      void set_member(char i,char *tx)      // 子類別的set_member()函數
      {
         id=i;
         delete [] text;               	    // 將原先指向的記憶體釋放
		text= new char[strlen(tx)+1];	    // 重新配置記憶體
         strcpy(text,tx);
      }
};
int main(void)
{
   CTextWin tx1('A',"Hello C++");	        // 建立子類別的物件tx1
   CTextWin tx2(tx1);				        // 以tx1建立子類別的物件tx2

   tx1.show_member();
   tx2.show_member();

   cout << "更改tx1物件的成員之後..." << endl;
   tx1.set_member('B',"Welcome  C++");

   tx1.show_member();
   tx2.show_member();

   system("pause");
   return 0;
}
