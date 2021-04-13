// Fig. 4.11: fig04_11.c
// Counter-conrolled iteration

#include <stdio.h>

int main(int argc, char const *argv[]) {
  unsigned int x;

  for (x = 0; x <= 10; x++) {
    if (x == 5) {
      break;
    }
    printf("%u ", x);
  }

  printf("\nBroke out of loop at x == %u\n", x);
}
