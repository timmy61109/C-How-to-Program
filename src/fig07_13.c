// Fig. 7.13: fig07_18.c
// Attemping to modify a constant pointer to non-constant data.
#include <stdio.h>

int main(void) {
  int x;
  int y;

  // ptr is a constant pointer to an integer that can be modified
  // through ptr, but ptr always points to the same memory location
  int * const ptr = &x;
  *ptr = 7;
  ptr = &y;
}
