// prog10_6, ��ư}�C���ʺA�O����t�m
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i,*a;
   a=new int[5];		// ���}�C�t�m�ʺA�O����, �èϫ���a���V�ӰO����
   for(i=0;i<5;i++)	    // ���}�C�����]��
   a[i]=i*2;
   for(i=0;i<5;i++)	    // �L�X�}�C�����e
      cout << "a[" << i << "]=" << a[i] << "\t";
   cout << endl;
   delete[] a;	     	// ����}�C���ʺA�O����t�m�ϰ�
   a=NULL;			    // �ϫ���a�����V����a��

   system("pause");
   return 0;
}
