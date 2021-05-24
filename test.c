#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6
#define COUNT_SIZE 12
#define CUBOID_SIZE 360


int main(void) {
  int cuboid[CUBOID_SIZE];
  int count[COUNT_SIZE];
  int throw1;
  int throw2;
  srand(time(NULL));

  for (size_t i = 0; i < CUBOID_SIZE; ++i) {
      cuboid[i] = 0;
  }

  for (size_t i = 0; i < COUNT_SIZE; ++i) {
      count[i] = 0;
  }

  for (size_t i = 0; i < 36000; ++i) {
    throw1 = rand() % SIZE + 1;
    throw2 = rand() % SIZE + 1;
    cuboid[throw1 + throw2 * 10] += 1;
    count[throw1 + throw2 - 1] += 1;
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
  puts("");

  for (size_t i = 0; i < COUNT_SIZE; ++i) {
    printf("%d ", count[i]);
  }
  puts("");
}
