// prog7_18, �R�O�C�޼ƪ��ϥ�
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
   int i ;
   cout << "The value of argc is " << argc;  // �L�X�R�O�C�޼ƪ����e
   cout << endl;
   for(i=0;i<argc;i++)
      cout << "argv[" << i << "]=" << argv[i] << endl;
   system("pause");
   return 0;
}
