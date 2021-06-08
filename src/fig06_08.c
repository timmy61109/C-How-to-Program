// Fig. 6.8: fig06_08.c
// Displaying a histogram.
#include <stdio.h>
#define SIZE 5

// function main begins program execution
int main(void) {
  int n[SIZE] = {19, 3, 15, 7, 11};

  printf("%s%13s%17s\n", "Element", "Value", "Histogram");

  // for each element of array n, output a bar of the histogram
  for (size_t i = 0; i < SIZE; ++i) {
    printf("%7lu%13d        ", i , n[i]);

    for (size_t j = 1; int(j) <= n[i]; ++j) {
      printf("%c", '*');
    }

    puts("");
  }
}
