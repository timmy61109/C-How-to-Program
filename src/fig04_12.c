// Fig. 4.12: fig04_12.c
// Counter-conrolled iteration

#include <stdio.h>

int main(int argc, char const *argv[]) {
  unsigned int x;

  for (x = 0; x <= 10; x++) {
    if (x == 5) {
      continue;
    }
    printf("%u ", x);
  }

  printf("\nBroke out of loop at x == %u\n", x);
}
