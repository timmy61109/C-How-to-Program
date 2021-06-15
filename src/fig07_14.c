// Fig. 7.14: fig07_14.c
// Attempting to modify a constant pointer to constant data.
#include <stdio.h>

int main(void) {
  int x = 5;
  int y;

  // ptr is a constant pointer to a constant integer. ptr always
  // points to the same location; the integer at that location
  // canot be modified
  const int *const ptr = &x;

  printf("%d\n", *ptr);
  *ptr = 7;
  ptr = &y;
}
