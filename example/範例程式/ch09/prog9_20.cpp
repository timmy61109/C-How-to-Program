// prog9_20, �H�����ܼƫ��V�r��
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char name[20];
   char *ptr="How are you?";		// �N���Ы��V�r��"How are you?"

   cout << "What's your name? ";	
   cin.getline(name,20);			                // ��J�r��
   cout << "Hi, " << name << ", " << ptr << endl;	// ��X
    
   system("pause");
   return 0;
}
