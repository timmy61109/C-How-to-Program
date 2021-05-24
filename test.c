#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6


int main(void) {
  int cuboid[360];
  int count[13];
  int throw1;
  int throw2;
  srand(time(NULL));

  for (size_t i = 0; i < 360; ++i) {
      cuboid[i] = 0;
  }

  for (size_t i = 0; i < 13; ++i) {
      count[i] = 0;
  }

  for (size_t i = 0; i < 36000; ++i) {
    throw1 = rand() % SIZE + 1;
    throw2 = rand() % SIZE + 1;
    printf("%d, %d\n", throw1, throw2);
    cuboid[throw1 + throw2 * 10] += 1;
    count[throw1 + throw2] += 1;
  }

  printf("     ");
  for (size_t i = 1; i <= SIZE; ++i) {
    printf("%6lu", i);
  }
  printf("\n");

  for (size_t i = 1; i <= SIZE; ++i) {
    printf("%6lu", i);
    for (size_t j = 1; j <= SIZE; ++j) {
      printf("%6d", cuboid[i + j * 10]);
    }
    printf("\n");
  }
  for (size_t i = 1; i < 13; ++i) {
    printf("%d ", count[i]);
  }
  puts("");
}
