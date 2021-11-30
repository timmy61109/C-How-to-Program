// 修正後的標頭檔cwin.h，可判別此標頭檔是否有被載入過

#ifndef CWIN_H   		// 如果CWIN_H沒有被定義過
#define CWIN_H   		// 則定義CWIN_H

class CWin    			// 定義視窗類別CWin
{
   protected:
     char id;
     int width;   
     int height;
   public:
     CWin(char ch, int w, int h):id(ch),width(w),height(h){}
     void show(void);    	// 成員函數area()的原型
};

#endif    				// #ifndef到此結束
