#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6
#define COUNT_SIZE 12
#define CUBOID_SIZE 360


int main(void) {
  int y = 5;
  int *yPtr;

  yPtr = &y;

  printf("%d", *yPtr);
}
