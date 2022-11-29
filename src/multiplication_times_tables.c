#include <stdio.h>

int main(int argc, char const *argv[]) {
  int multiplicand[3] = {1, 2, 3};
  int multiplier = 1;

  for (size_t times_table = 0; times_table < 3; times_table++) {
    for (size_t row = 0; row < 3; row++) {
      for (size_t times_table = 0; times_table < 3; times_table++) {
        printf("%d ", multiplicand[times_table] * multiplier);
        multiplier++;
      }
    }
    multiplier = 1;
  }
  printf("\n");

}
