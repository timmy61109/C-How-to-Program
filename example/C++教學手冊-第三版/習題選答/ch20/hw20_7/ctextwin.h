// 標頭檔ctextwin.h，用來儲存CTextWin類別的定義
using namespace std;
class CTextWin : public CWin  // 定義CTextWin類別，繼承自CWin類別
{
   private:                  // 子類別裡的私有成員
      char *text;

   public:
      CTextWin(char i,char *tx):CWin(i)     	// 子類別的建構元
      {
         cout << "CTextWin()建構元被呼叫了..." << endl;
         text= new char[strlen(tx)+1];
         strcpy(text,tx);
      }
      CTextWin(const CTextWin &tx):CWin(tx)	// 子類別的拷貝建構元
      {
         cout << "CTextWin()拷貝建構元被呼叫了..." << endl;
         text= new char[strlen(tx.text)+1];
         strcpy(text,tx.text);
      }
      ~CTextWin()
      {
         delete [] text;  		// 釋放text指標所指向的記憶體
         cout << "CTextWin()解構元被呼叫了... " << endl;
         system("pause");
      }
      void show_member()       // 子類別的show_member()函數
      {
         cout << "Window " << id << ": ";
         cout << "text = " << text << endl;
      }
      void set_member(char i,char *tx) // 子類別的set_member()函數
      {
         id=i;
		delete [] text;				// 將原先指向的記憶體釋放
		text= new char[strlen(tx)+1];	// 重新配置記憶體
         strcpy(text,tx);
      }
};
