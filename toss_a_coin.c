// Fig. 5.13: fig05_13.c
// Randomizing die-rolling program.

#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(void) {
  unsigned int counter;
  unsigned int heads;
  unsigned int tails;

  srand(time(NULL));
  heads = 0;
  tails = 0;

  for (counter = 1; counter <= 100; counter++) {

    if (rand() % 2 == 0) {
      heads++;

    } else {
      tails++;

    }
  }
  printf("%u\n", heads);
  printf("%u\n", tails);
}
