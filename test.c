#include <stdio.h>

int main(void) {
  int count;
  int value;
  int i;
  int j;

  count = 100;

  for (value = 1; value <= count; ++value){
    j = 0;
    for (i = 1; i <= value && j <= 2; i ++) {
      if (value % i == 0) {
        j++;
      }
    }
    if (j == 2) {
      printf("%u\n", value);
    }
  }
}
