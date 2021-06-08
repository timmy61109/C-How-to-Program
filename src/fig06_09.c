// Fig. 6.9: fig06_09.c
// Roll a six-sided die 60,000,000 times
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

// function main begins program execution
int main(int argc, char const *argv[]) {
  unsigned int frequency[SIZE] = {0};

  srand(time(NULL));

  // roll die 60,000,000 times
  for (size_t roll = 1; roll <= 60000000; ++roll) {
    size_t face = 1 + rand() % 6;
    ++frequency[face];
  }

  printf("%s%17s\n", "Face", "Frequency");

  // output frequency elements 1-6 in tabular format
  for (size_t face = 1; face < SIZE; ++face) {
    printf("%4lu%17d\n", face, frequency[face]);
  }
}
