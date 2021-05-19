// Fig. 4.02: fig04_02.c
// Counter-conrolled iteration
#include <stdio.h>

int main(int argc, char const *argv[]) {
  unsigned int count;

  for (count = 1; count <= 10; count++) {
    printf("%u\n", count);
  }
}
