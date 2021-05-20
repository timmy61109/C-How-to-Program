// Fig. 6.6: fig06_06.c
// Computing the sum of the elements of an array.
#include <stdio.h>
#ifndef SIZE
#define SIZE 12
#endif

// function main begins program execution
int main(int argc, char const *argv[]) {
  // use an initializer list to initialize the array
  int a[SIZE] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
  int total = 0;

  // sum contents of array a
  for (size_t i = 0; i < SIZE; ++i) {
    total += a[i];
  }

  printf("Total of array element values is %d\n", total);
}
