// prog10_2, �L�X�}�C����}
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int num[3][4];					      // �ŧi3��4���G���}�Cnum

   cout << "num=" << num << endl;		  // �L�X��������num����
   cout << "&num=" << &num << endl; 	  // �L�X��������num����}
   cout << "*num=" << *num << endl;       // �L�X��������num�ҫ��V�����Ъ���

   cout << "num[0]=" << num[0] << endl;	  // �L�X���б`��num[0]����
   cout << "num[1]=" << num[1] << endl;   // �L�X���б`��num[1]����
   cout << "num[2]=" << num[2] << endl;	  // �L�X���б`��num[2]����

   cout << "&num[0]=" << &num[0] << endl; // �L�X���б`��num[0]����}
   cout << "&num[1]=" << &num[1] << endl; // �L�X���б`��num[1]����}
   cout << "&num[2]=" << &num[2] << endl; // �L�X���б`��num[2]����}

   system("pause");
   return 0;
}
