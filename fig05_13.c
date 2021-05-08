// Fig. 5.13: fig05_13.c
// Randomizing die-rolling program.

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {
  unsigned int seed;
  unsigned i;

  printf("%s", "Enter seed:");
  scanf("%u", &seed);

  srand(seed);

  for (i = 1; i <= 10; i++) {
    // pick a random number form 1 to 6 and output it
    printf("%10d", 1 + (rand() % 6));

    if (i % 5 == 0) {
      puts("");
    }
  }

  // 使用自動化種子
  srand(time(NULL));

  for (i = 1; i <= 10; i++) {
    // pick a random number form 1 to 6 and output it
    printf("%10d", 1 + (rand() % 6));

    if (i % 5 == 0) {
      puts("");
    }
  }
}
