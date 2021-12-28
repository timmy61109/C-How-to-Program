// 標頭檔cwin.h，用來儲存CWin類別的定義
class CWin    				     // 定義視窗類別CWin
{
   protected:
     char id;
     int width;   
     int height;
  public:
     CWin(char ch, int w, int h):id(ch),width(w),height(h){}
     void show(void);    		 // 成員函數area()的原型
};
