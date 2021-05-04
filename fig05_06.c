// Fig. 5.6: fig05_06.c
// Demonstration the function call stack
// and stach frames using a function square.
#include <stdio.h>

int square(int);

int main(int argc, char const *argv[]) {
  int a = 10;

  printf("%d squared: %d\n", a, square(a));
}

int square(int x) {
  return x * x;
}
