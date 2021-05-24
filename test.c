#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6


int main(void) {
  int cuboid[36];
  int throw1;
  int throw2;
  srand(time(NULL));

  for (size_t i = 0; i < 36; ++i) {
      cuboid[i] = 0;
  }

  for (size_t i = 0; i < 36000; ++i) {
    throw1 = rand() % SIZE;
    throw2 = rand() % SIZE;
    cuboid[throw1 * throw2 - 1] += 1;
  }

  printf("     ");
  for (size_t i = 0; i < SIZE; ++i) {
    printf("%5lu", i);
  }
  printf("\n");

  for (size_t i = 0; i < SIZE; ++i) {
    printf("%5lu", i);
    for (size_t j = 0; j < SIZE; ++j) {
      printf("%5d", cuboid[i * j]);
    }
    printf("\n");
  }
}
