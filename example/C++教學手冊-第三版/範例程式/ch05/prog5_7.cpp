// prog5_7, ±_ª¬for°j°é¨D9*9­¼ªkªí
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{      
    int i,j;

    for(i=1;i<=3;i++)		// ¥~¼h°j°é
    {
       for(j=1;j<=3;j++)	// ¤º¼h°j°é
          cout << i << "*" << j << "=" << (i*j) << "\t";
       cout << endl;
    }
    
    system("pause");
    return 0;
}
