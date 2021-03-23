// Fig. 4.05: fig04_05.c
// Counter-conrolled iteration
#include <stdio.h>

int main(int argc, char const *argv[]) {
  unsigned int sum = 0;
  unsigned int number;

  for (number = 2; number <= 100; number += 2) {
    sum += number;

  }

  printf("Sum is %u\n", sum);
}
