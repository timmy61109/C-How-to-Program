// Fig. 7.12: gig07_12.c
// Attempting to modify data through a
// non-constant pointer to constant data.
// 這是示範通過const保護程式執行時不會出錯，將指向常數資料的非常數指標。
#include <stdio.h>


void f(const int *xPtr);

int main(void) {
  int y;
  f(&y);
}

void f(const int *xPtr) {
  *xPtr = 100;
}
