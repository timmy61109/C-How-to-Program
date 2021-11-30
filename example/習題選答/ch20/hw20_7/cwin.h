// 標頭檔cwin.h，用來儲存CWin類別的定義
using namespace std;
class CWin    // 定義CWin類別，在此為父類別
{
   protected:
     char id;

   public:
     CWin(char i='D'):id(i)   	// 父類別的建構元
     {
        cout << "CWin()建構元被呼叫了..." << endl;
     }
     CWin(const CWin& win)    	// 父類別的拷貝建構元
     {
        cout << "CWin()拷貝建構元被呼叫了..." << endl;
        id=win.id;
     }
     ~CWin()     				// 父類別的解構元
     {
        cout << "CWin()解構元被呼叫了... " << endl;
        system("pause");
     }
};
