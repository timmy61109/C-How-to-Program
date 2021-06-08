// Fig. 7.6: fig07_06.c
// Cube a variable using pass-by-value.
#include <stdio.h>

int cubeByValue(int n);

int main(int argc, char const *argv[]) {
  int number = 5;
  printf("Theoriginal value of number is %d", number);

  // pass number by value to cubeByValue
  number = cubeByValue(number);
  printf("\nThe now value of number is %d\n", number);
}


// calculate and return cube of integer argument
int cubeByValue(int n) {
  return n * n * n;
}
