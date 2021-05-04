//Fig. 5.3: fig05_03.c
// Creating and using a programmer-defined function.
#include <stdio.h>

int square(int y);

int main(int argc, char const *argv[]) {
  for (size_t i = 1; i <= 10; i++) {
    printf("%u ", square(i));
  }
  puts("");
}

int square(int y) {
  return y * y;
}
