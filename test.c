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
      if (i < COUNT_SIZE) {
        count[i] = 0;
      }
  }

  for (size_t i = 0; i < 36000; ++i) {
    throw1 = rand() % SIZE + 1;
    throw2 = rand() % SIZE + 1;
    cuboid[(throw1 + throw2 * 10) - 1] += 1;
    count[throw1 + throw2 - 1] += 1;
  }

  printf("      ");
  for (size_t i = 1; i <= SIZE; ++i) {
    printf("%6lu", i);
  }

  for (size_t i = 0; i < SIZE; ++i) {
    printf("\n%6lu", i + 1);
    for (size_t j = 0; j < SIZE; ++j) {
      printf("%6d", cuboid[(i + 1) + ((j + 1) * 10) - 1]);
    }
  }
  printf("\n\n");

  for (size_t i = 0; i < COUNT_SIZE; ++i) {
    printf("%6lu", i + 1);
  }
  puts("");
  for (size_t i = 0; i < COUNT_SIZE; ++i) {
    printf("%6d", count[i]);
  }
  puts("");
}
