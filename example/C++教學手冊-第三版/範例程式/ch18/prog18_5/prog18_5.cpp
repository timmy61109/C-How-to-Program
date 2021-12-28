//prog18_5, 文字檔的拷貝與讀取
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char txt[80],ch;

   ifstream ifile1("c:\\welcome.txt",ios::in);
   ofstream ofile("c:\\welcome2.txt",ios::out);

   while(ifile1.get(ch))                       // 判別是否讀到檔案的尾端
      ofile.put(ch);
   cout << "拷貝完成..." << endl;
   ifile1.close();
   ofile.close();
   
   ifstream ifile2("c:\\welcome2.txt",ios::in);
   while(!ifile2.eof())                        // 判別是否讀到檔案的尾端
   {
      ifile2.getline(txt,80,'\n');
      cout << txt << endl;
   }
   ifile2.close();

   system("pause");
   return 0;
}
