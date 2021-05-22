#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE_1 5
#define SIZE_2 20


int main(void) {
  int grades[SIZE_1][SIZE_2];
  double mathGrades[SIZE_2];
  srand(time(NULL));

  for (size_t i = 0; i < SIZE_1; ++i) {
    for (size_t j = 0; j < SIZE_2; ++j) {
      grades[i][j] = rand() % 100;
    }
  }
  for (size_t i = 0; i < SIZE_2; ++i) {
    printf("%4lu", i);
  }
  printf("\n");
  for (size_t i = 0; i < SIZE_1; ++i) {
    printf("%4lu", i);
    for (size_t j = 0; j < SIZE_2; ++j) {
      printf("%4d", grades[i][j]);
    }
    printf("\n");
  }

  printf("\n\n    ");
  for (size_t j = 0; j < SIZE_2; ++j) {
    mathGrades[j] = rand() % 100;
    printf("%4.0f", mathGrades[j]);
  }

  printf("\n\n    ");
  for (size_t i = 0; i < SIZE_2; ++i) {
    printf("%4lu", i);
  }
  printf("\n");
  for (size_t i = 0; i < SIZE_1; ++i) {
    printf("%4lu", i);
    for (size_t j = 0; j < SIZE_2; ++j) {
      if (i == 0) {
        grades[i][j] = mathGrades[j];
      }
      printf("%4d", grades[i][j]);
    }
    printf("\n");
  }
}
