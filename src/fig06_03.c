// Fig. 6.3: fig06_03.case
// Intializing the elements of an array to zeros.

// function main begins program exeution
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n[5];

  // set elements of array n to 0
  for (size_t i = 0; i < 5; i++) {
    n[i] = 0;
  }

  printf("%s%13s\n", "Element", "Value");

  // output contents of array n in tabular format
  for (size_t i = 0; i < 5; i++) {
    printf("%7lu%13d\n", i, n[i]);
  }
}
