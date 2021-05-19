#include <stdio.h>

int main(void) {
  enum string {
    X0,
    X1,
    X2 = 10,
    X3,
    X4,
    X5 = 20,
    X6,
    X7,
    X8 = 0,
    X9,
  };

  enum string x = X3;
  printf("%d\n", x);
  printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", X0, X1, X2, X3, X4, X5, X6, X7, X8, X9);
}
