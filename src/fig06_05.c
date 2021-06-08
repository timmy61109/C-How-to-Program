// Fig. 6.5: fig06_05.c
// Initalizing the elements of array s to the even integers from 2 to 20.
#include <stdio.h>
#ifndef SIZE
#define SIZE 5
#endif

// function main begins program execution
int main(int argc, char const *argv[]) {
  // symbloic constant SZIE can be used to specify array size
  int s[SIZE];
  for (size_t j = 0; j < SIZE; ++j) {
    s[j] = 2 + 2 * j;
  }

  printf("%s%13s\n", "Element", "Value");

  // output cantents array s in tabular format
  for (size_t j = 0; j < SIZE; ++j) {
    printf("%7lu%13d\n", j, s[j]);
  }
}
