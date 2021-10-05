// Ch. 10 Slef. 13: ch10_self4.c
// 試輸入一個字串，利用指標的方式將該字串的小寫字母轉換成大寫。
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int staticMemoryAllocationArray(int *ptra, int *ptrb, int *ptrc);

int main() {
  int *ptra;
  int *ptrb;
  int *ptrc;
  int k = 5;

  ptra = new int[4];
  ptrb = new int[4];
  ptrc = new int[4];


  for (size_t i = 1; i <= 4; i++) {
    ptra[i - 1] = (2 * i) + 1;
  }

  for (size_t i = 0, j = 2; i <= 4; i++, j++) {
    k += (pow(-1, i) * j);
    ptrb[i] = k;
  }

  staticMemoryAllocationArray(ptra, ptrb, ptrc);

}

int staticMemoryAllocationArray(int *ptra, int *ptrb, int *ptrc) {

  for (size_t i = 0; i < 4; i++) {
    ptrc[i] = ptra[i] * ptrb[i];
  }

  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 4; j++) {
      if (i == 0) {
        printf("%4d ", ptra[j]);
      } else if (i == 1) {
        printf("%4d ", ptrb[j]);
      } else if (i == 2) {
        printf("%4d ", ptrc[j]);
      }
    }
    printf("\n");
  }

  delete [] ptra;
  delete [] ptrb;
  delete [] ptrc;

  return 0;

}
