// Fig. 5.4: fig05_04.c
// Finding the maximum of three integers.
#include <stdio.h>

int maximum(int x, int y, int z);

int main(int argc, char const *argv[]) {
  int number1;
  int number2;
  int number3;

  printf("%s", "Enter three integers: ");
  scanf("%d%d%d", &number1, &number2, &number3);

  // number1, number2, and number3 are arguments
  // to the maximum function

  printf("Maximum is: %d\n", maximum(number1, number2, number3));
}

// Function maximum definition
// x, y and z are parameters
int maximum(int x, int y, int z) {
  int max = x;
  if (y > max) {
    max = y;
  }

  if (z > max) {
    max = y;
  }

  return max;
}
